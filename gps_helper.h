#ifndef GPS_HELPER_H
#define GPS_HELPER_H

#include<QDebug>

#define TRUE 1
#define FALSE 0
//定位模式
#define GPS_MODE_SELECT        	1
#define BD_MODE_SELECT          2
#define GPS_BD_MODE_SELECT  	3

#define GNSS_MODULE_GPS_UBLOX      	1
#define GNSS_MODULE_BD_TD  			2
#define GNSS_MODULE_BD_HX  			3

#define			GPS_BUFFER_SIZE				1024
#define			NMEA_BUFFER_SIZE			128
#define			QUEUE_GPS_SIZE				4

#define		GPS_DECODE_NULL			0
#define		GPS_DECODE_RMC			1
#define		GPS_DECODE_GGA			2
#define		GPS_DECODE_TXT			3
#define		GPS_DECODE_GSV			4
#define		GPS_DECODE_GSA			5
#define		GPS_DECODE_OTHER			6

//gprmc
#define		GPS_GPRMC_FIELD_TIME			1
#define		GPS_GPRMC_FIELD_STATUS			2
#define		GPS_GPRMC_FIELD_LATITUDE		3
#define		GPS_GPRMC_FIELD_NS				4
#define		GPS_GPRMC_FIELD_LONGTITUDE		5
#define		GPS_GPRMC_FIELD_EW				6
#define		GPS_GPRMC_FIELD_SPEED			7
#define		GPS_GPRMC_FIELD_COG				8
#define		GPS_GPRMC_FIELD_DATE			9

#define		GPS_GPRMC_FIELD_MODE 		12  //定位模式
//gpgga
#define		GPS_GPGGA_FIELD_FS				6
#define		GPS_GPGGA_FIELD_FIX				7
#define		GPS_GPGGA_FIELD_HDOP			8
#define		GPS_GPGGA_FIELD_ALTITUDE		9
//gpgsv
#define		GPS_GPGSV_FIELD_PAGE			2
#define		GPS_GPGSV_FIELD_TOTAL			3
typedef struct _GPGSV
{
    int Total;
    int PRN[32];//卫星编号
    int CN[32];//载噪比
}gsv_t;

typedef struct _GPGGA
{
    unsigned int fs;//Position Fix Indicator
    unsigned int fix;//Satellites used.0-12
    float hdop;//定位几何因子
    float altitude;//海拔单位m
}gga_t;


typedef struct _GPRMC
{
    unsigned int time_bcd;//BCD
    int time_hour;
    int time_min;
    int time_sec;
    unsigned int date_bcd;//BCD
    int date_year;
    int date_month;
    int date_day;
    unsigned int latitude;
    unsigned char lat[8];
    unsigned char str_lat[15];
    unsigned int longitude;
    unsigned char lng[9];
    unsigned char str_lng[15];
    unsigned char ns;
    unsigned char ew;
    unsigned char st;
    unsigned int speed;//取整到0.001knot 约等于0.0005144m/s
    int cog;	//取整到度
    unsigned char Mode;  //定位模式 ADE
    int gps_type;
}rmc_t;

typedef struct _gps_test_param
{
    int num;
    int sni;
    int time;
    int time_agps;
}gps_test_param_st;

class gps_helper
{
public:
    gps_helper();
    ~gps_helper();
   static gps_test_param_st gps_param;
   static rmc_t rmc;
   static gga_t gga;
   static gsv_t GPGSV;
   static gsv_t BDGSV;
   static int gps_parse_ok;
   static int ht_StrCmp(const char *pdest,const char *psrc)
    {
        int cnt=0;
        while(*pdest && *psrc)
        {
            if(*pdest++ != *psrc++) break;
            cnt ++;
        }
        return cnt;
    }
    static int AsciiSearch(const char *pd,char d,int len)
    {
        int i;
        i = 0;
        while(len-->0)
        {
            if(*pd++ == d)
            {
                return i;
            }
            i++;
        }
        return -1;
    }
    static int is_space(char ch)
    {
       if (ch == ' ')  return 1;
       else  return 0;
    }
    static int is_digit(char ch)
    {
       if (ch >= '0' && ch <= '9')  return 1;
       else  return 0;
    }
    static double str_to_float(char *s)
    {
       double power, value;
       int i, sign;
       for (i = 0; is_space(s[i]); i++); //除去字符串前的空格
       sign = (s[i] == '-') ? -1 : 1;
       if (s[i] == '-' || s[i] == '+') //要是有符号位就前进一位
          i++;
       for (value = 0.0; is_digit(s[i]); i++) //计算小数点前的数字
          value = value * 10.0 + (s[i] - '0');
       if (s[i] == '.')  i++;
       for (power = 1.0; is_digit(s[i]); i++) //计算小数点后的数字
       {
          value = value * 10.0 + (s[i] - '0');
          power *= 10.0;
       }
       //trace("value:%d,power:%d,%d",(int)value,(int)power,sign);
       value = sign * value;
       // trace("value 1:%d",(int)value);
       value = value / power;
       return value;
    }
    static int Mem2INT(const char *pMem,int len,int type)
    {
        char d;
        int rtn;
        int bFindFirst;
        rtn = 0;
        bFindFirst = FALSE;
        if(type == 1)
        {
            bFindFirst = TRUE;
        }
        while(len-->0)
        {
            d = *pMem++;
            if(d>='0'&&d<='9')
            {
                bFindFirst = TRUE;
                rtn *= 10;
                rtn += d-'0';
            }
            else
            {
                if(bFindFirst)	break;
            }
        }
        return rtn;
    }
    static char  ASCII2HEX(const char *pd)
    {
        if((*pd>='0')&&(*pd<='9'))
        {
            return (*pd-'0');
        }
        else if((*pd>='A')&&(*pd<='F'))
        {
            return (*pd-'A'+10);
        }
        else if((*pd>='a')&&(*pd<='f'))
        {
            return (*pd-'a'+10);
        }
        return *pd;
    }
    static int GPSTimeRecoverRe(char *pt, rmc_t *pData)
    {
       //日期
       pData->date_bcd = (pt[2] << 16) + (pt[1] << 8) + pt[0];
       //时间
       pData->time_bcd = (pt[3] << 16) + (pt[4] << 8) + pt[5];
       return 6;
    }

    static int ht_GetBuffFieldOffset(char *pIn,char FieldChar,char FieldNum,uint len)
    {
        int offset,ret;
        offset = 0;
        while(FieldNum--)
        {
            ret = AsciiSearch(pIn+offset,FieldChar,len-offset);
            if(ret == -1)	return -1;
            offset += ret;
            if(FieldNum>0)	offset++;
        }
        return offset;
    }
    static int gps_GetGPSFieldOffset(char *pIn, char FieldNum, uint len)
    {
       return ht_GetBuffFieldOffset(pIn, ',', FieldNum, len);
    }
    static int LoopBufferCopyR(char* pdst, char* psrc,int DSize,int DStart,int BufferSize,int DType)
    {
        int i;
        for(i=0;i<DSize;i++)
        {
            DStart %= BufferSize;
            //小端模式
            if(DType == 1)
                pdst[DSize-i-1] = psrc[DStart];
            //大端模式
            else
                pdst[i] = psrc[DStart];
            DStart++;
        }
        return (DStart%BufferSize);
    }

    static int gps_CheckSun(char *pIn, char *pOut, int dStart, int len)
    {
       int i;
       int tStart = dStart;
       char tCheckSun = 0, iCheckSun;
       //跳过'$'
       tStart++;
       tStart %= GPS_BUFFER_SIZE;
       for (i = 0; i < len - 5; i++)
       {
          tCheckSun ^= pIn[tStart++];
          tStart %= GPS_BUFFER_SIZE;
       }
       //跳过'*'
       tStart++;
       tStart %= GPS_BUFFER_SIZE;
       //获取字符串里的校验和
       iCheckSun = ASCII2HEX(&pIn[tStart++]);
       tStart %= GPS_BUFFER_SIZE;
       iCheckSun <<= 4;
       iCheckSun |= ASCII2HEX(&pIn[tStart++]);
       tStart %= GPS_BUFFER_SIZE;
       if (tCheckSun == iCheckSun)
       {
          LoopBufferCopyR(pOut, pIn, len, dStart, GPS_BUFFER_SIZE, 0);
          pOut[len++] = 0x0a;
          pOut[len++] = 0;
          return 0;
       }
       else
       {
          return -1;
       }
    }
    static int gps_GPGSVDecode(char *pIn, gsv_t *pGSV, int len)
    {
       int offset, end;
       char ipage, iTotal, i, t;
       end = AsciiSearch(pIn, '\n', len);
       if (end != -1)
       {
          //GET PAGE
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPGSV_FIELD_PAGE, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          ipage = ASCII2HEX(pIn + offset++);
          //GET TOTAL
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPGSV_FIELD_TOTAL, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          iTotal = Mem2INT(pIn + offset, 2, 1);
          pGSV->Total = iTotal;
          if (ipage * 4 <= iTotal)
          {
             t = 4;
          }
          else
          {
             t = iTotal % 4;
          }
          for (i = 0; i < t; i++)
          {
             //GET PRN
             offset = gps_GetGPSFieldOffset(pIn, GPS_GPGSV_FIELD_TOTAL + i * 4 + 1, len);
             if (offset == -1)
             {
                goto Clearup;
             }
             offset++;
             pGSV->PRN[(ipage - 1) * 4 + i] = Mem2INT(pIn + offset, 4, 1);
             //Get CN
             offset = gps_GetGPSFieldOffset(pIn, GPS_GPGSV_FIELD_TOTAL + i * 4 + 4, len);
             if (offset == -1)
             {
                goto Clearup;
             }
             offset++;
             pGSV->CN[(ipage - 1) * 4 + i] = Mem2INT(pIn + offset, 2, 1);
          }
          //clear it
          pIn[end] = 0x00;
          return 0;
       }
    Clearup:
       if (end != -1) pIn[end] = 0x00;
       return -1;
    }
    static int gps_GPGGADecode(char *pIn, gga_t *pGGA, int len)
    {
       int offset, end;
       end = AsciiSearch(pIn, '\n', len);
       if (end != -1)
       {
          //GET FS
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPGGA_FIELD_FS, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          pGGA->fs = ASCII2HEX(pIn + offset++);
          //GET FIX
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPGGA_FIELD_FIX, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          pGGA->fix = Mem2INT(pIn + offset, 2, 1);
          //GET DOP
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPGGA_FIELD_HDOP, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          //pGGA->hdop = Mem2INT(pIn + offset, 10, 1);
          pGGA->hdop = str_to_float(pIn + offset);
          //Get Altitude
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPGGA_FIELD_ALTITUDE, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          //pGGA->altitude = Mem2INT(pIn + offset, 10, 1);
          pGGA->altitude = str_to_float(pIn + offset);
          //clear it
          pIn[end] = 0x00;
          return 0;
       }
    Clearup:
       if (end != -1) pIn[end] = 0x00;
       return -1;
    }

    static int gps_GPRMCDecode(char *pIn, rmc_t *pRMC, int len, char TimeZone)
    {
       //$GPRMC,010101.130,A,3606.6834,N,12021.7778,E, 0.0,238.3,010807,,,A*6C\r\n
       //$GNRMC,020820.000,A,3013.0460,N,12012.0574,E,9.63,2.16,080517,,,A*7F
       //保留原始数据
       //40074155 m
       int offset, end;
       char i;
       if ((pIn[1] == 'G') && (pIn[2] == 'N'))
       {
          pRMC->gps_type = GNSS_MODULE_BD_TD;
       }

       end = AsciiSearch(pIn, '\n', len);
       if (end != -1)
       {
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_TIME, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          //GET TIME
          if (*(pIn + offset) == ',') pRMC->time_bcd = 0;
          else
          {
//             //----------------
//             pRMC->time_bcd = ASCII2HEX(pIn + offset++);
//             for (i = 0; i < 5; i++)
//             {
//                pRMC->time_bcd <<= 4;
//                pRMC->time_bcd |= ASCII2HEX(pIn + offset++);
//             }
             int t_low,t_high;
             t_high=ASCII2HEX(pIn + offset++);
             t_low=ASCII2HEX(pIn + offset++);
             pRMC->time_hour=t_high*10+t_low;
             t_high=ASCII2HEX(pIn + offset++);
             t_low=ASCII2HEX(pIn + offset++);
             pRMC->time_min=t_high*10+t_low;
             t_high=ASCII2HEX(pIn + offset++);
             t_low=ASCII2HEX(pIn + offset++);
             pRMC->time_sec=t_high*10+t_low;
          }
          qDebug()<<QString().sprintf("%06x %02d:%02d:%02d",pRMC->time_bcd,pRMC->time_hour,pRMC->time_min,pRMC->time_sec);
          //Get status
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_STATUS, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          if (pIn[offset] == 'A')
          {
             pRMC->st = 'A';
          }
          else
          {
             pRMC->st = 'V';
          }
          //Get Latitude
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_LATITUDE, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          if (*(pIn + offset) == ',') pRMC->latitude = 0;
          else
          {
             //3606.6830
             for (i = 0; i < 4; i++)
             {
                pRMC->lat[i] = ASCII2HEX(pIn + offset++);
             }
             offset += AsciiSearch(pIn + offset, '.', len - offset);
             offset++;
             for (i = 4; i < 8; i++)
             {
                pRMC->lat[i] = ASCII2HEX(pIn + offset++);
             }
             uint t;
    #define k_k 1000000
             t = pRMC->lat[2] * k_k * 10 + pRMC->lat[3] * k_k * 1 + pRMC->lat[4] * k_k / 10 + pRMC->lat[5] * k_k / 100 + pRMC->lat[6] * k_k / 1000 + pRMC->lat[7] * k_k / 10000;
             t = t / 60;
             t = pRMC->lat[0] *k_k* 10 + pRMC->lat[1]*k_k + t;
             pRMC->latitude = t;
          }
          //Get N/S
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_NS, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          pRMC->ns = pIn[offset];
          //Get Longtitude
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_LONGTITUDE, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          if (*(pIn + offset) == ',') pRMC->longitude = 0;
          else
          {
             //12021.777
             for (i = 0; i < 5; i++)
             {
                pRMC->lng[i] = ASCII2HEX(pIn + offset++);
             }
             offset += AsciiSearch(pIn + offset, '.', len - offset);
             offset++;
             for (i = 5; i < 9; i++)
             {
                pRMC->lng[i] = ASCII2HEX(pIn + offset++);
             }
             uint t;
    #define k_k 1000000
             t = pRMC->lng[3] * k_k * 10 + pRMC->lng[4] * k_k * 1 + pRMC->lng[5] * k_k / 10 + pRMC->lng[6] * k_k / 100 + pRMC->lng[7] * k_k / 1000 + pRMC->lng[8] * k_k / 10000;
             t = t / 60;
             t = pRMC->lng[0] * 100 * k_k + pRMC->lng[1] * 10 * k_k + pRMC->lng[2] * k_k + t;
             pRMC->longitude = t;
          }
          //Get E/W
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_EW, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          pRMC->ew = pIn[offset];
          //Get SPEED
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_SPEED, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          pRMC->speed = 0;
          while ((*(pIn + offset) >= '0') && (*(pIn + offset) <= '9'))
          {
             pRMC->speed *= 10;
             pRMC->speed += *(pIn + offset) - '0';
             offset++;
          }
          if (*(pIn + offset) == '.')
          {
             char t;
             offset++;
             for (t = 0; t < 3; t++)
             {
                pRMC->speed *= 10;
                if ((*(pIn + offset) >= '0') && (*(pIn + offset) <= '9'))
                {
                   pRMC->speed += *(pIn + offset) - '0';
                   offset++;
                }
             }
          }
          else
          {
             pRMC->speed *= 1000;
          }
          //Get COG
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_COG, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          pRMC->cog = Mem2INT(pIn + offset, 10, 1);
          //GET Date
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_DATE, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          if (*(pIn + offset) == ',') pRMC->date_bcd = 0;
          else
          {
              //             pRMC->date_bcd = ASCII2HEX(pIn + offset++);
              //             for (i = 0; i < 5; i++)
              //             {
              //                pRMC->date_bcd <<= 4;
              //                pRMC->date_bcd |= ASCII2HEX(pIn + offset++);
              //             }
              int t_low,t_high;
              t_high=ASCII2HEX(pIn + offset++);
              t_low=ASCII2HEX(pIn + offset++);
              pRMC->date_day=t_high*10+t_low;
              t_high=ASCII2HEX(pIn + offset++);
              t_low=ASCII2HEX(pIn + offset++);
              pRMC->date_month=t_high*10+t_low;
              t_high=ASCII2HEX(pIn + offset++);
              t_low=ASCII2HEX(pIn + offset++);
              pRMC->date_year=t_high*10+t_low+2000;



          }
          //clear it
          pIn[end] = 0x00;
          if ((pRMC->date_bcd != 0) && (pRMC->time_bcd != 0))
          {
             //时区转换
             if ((TimeZone < -11) || (TimeZone > 12)) TimeZone = 0;
             if (TimeZone != 0)
             {
                char tTime1[6], tTime2[6];
                char tDriction;
                if (TimeZone > 0) tDriction = 0;
                else
                {
                   TimeZone = TimeZone * (-1);
                   tDriction = 1;
                }
#if 0
                GPSTimeRecover(pRMC, tTime1);
                GetTimePoint(tTime1, tTime2, TimeZone, 2, tDriction);
                tTime2[4] = tTime1[4];
                tTime2[5] = tTime1[5];
                GPSTimeRecoverRe(tTime2, pRMC);
#endif
             }
          }

          //Get  GPS MODE
          offset = gps_GetGPSFieldOffset(pIn, GPS_GPRMC_FIELD_MODE, len);
          if (offset == -1)
          {
             goto Clearup;
          }
          offset++;
          pRMC->Mode = pIn[offset];

          qDebug()<<"gps rmc parse ok";
          qDebug()<<"lat:"<<pRMC->latitude<<"lng:"<<pRMC->longitude;
          return 0;
       }
    Clearup:
          qDebug()<<"gps rmc parse fail";
       if (end != -1)	pIn[end] = 0x00;
       return -1;
    }
    static int GPS_datadecode(char *pBuf, int *pS, int e, char *pNmea)
    {
       int len, start, offset1 = -1, offset2 = -1;
       char d1;
       int tReturn = GPS_DECODE_NULL;
       start = *pS;
       len = ((e + GPS_BUFFER_SIZE) - start) % GPS_BUFFER_SIZE;
       while (len-- > 0)
       {
          if (pBuf[start] == 0x24)//$
          {
             offset1 = start;
          }
          else if (pBuf[start] == '\n')
          {
             d1 = pBuf[(start + GPS_BUFFER_SIZE - 1) % GPS_BUFFER_SIZE];
             if ((d1 == '\r') && (offset1 >= 0))
             {
                //找到NMEA数据
                offset2 = start;
                break;
             }
          }
          start++;
          start %= GPS_BUFFER_SIZE;
       }
       //$...\r\n
       if ((offset1 >= 0) && (offset2 >= 0))
       {
          *pS = (offset2 + 1) % GPS_BUFFER_SIZE;
          len = ((offset2 + GPS_BUFFER_SIZE) - offset1) % GPS_BUFFER_SIZE;
          if (gps_CheckSun(pBuf, pNmea, offset1, len) == 0)
          {
             if (ht_StrCmp(pNmea + 3, "RMC") >= 3)
             {
                tReturn = GPS_DECODE_RMC;
             }
             else if (ht_StrCmp(pNmea + 3, "GGA") >= 3)
             {
                tReturn = GPS_DECODE_GGA;
             }
             else if (ht_StrCmp(pNmea + 3, "TXT") >= 3)
             {
                tReturn = GPS_DECODE_TXT;
             }
             else if (ht_StrCmp(pNmea + 3, "GSA") >= 3)
             {
                tReturn = GPS_DECODE_GSA;
             }
             else if (ht_StrCmp(pNmea + 3, "GSV") >= 3)
             {
                tReturn = GPS_DECODE_GSV;
             }
             else
             {
                tReturn = GPS_DECODE_OTHER;
             }
          }
       }
       //$...
       else if (offset1 >= 0)
       {
          *pS = offset1;
       }
       //...
       else
       {
          *pS = e;
       }

       return tReturn;

    }

   static void gps_Pro(char *gps_buf, int size)
    {
       char nmea[NMEA_BUFFER_SIZE];
       int rtn;
       char bDone;
       int g_gps_r_Ro;
       qDebug()<<"gps buf :"<<size;
       g_gps_r_Ro=0;
       gps_parse_ok=0;
       if (size)
       {
          bDone = TRUE;
          while (bDone)
          {
             rtn = GPS_datadecode(gps_buf,&g_gps_r_Ro, size,nmea);
             switch (rtn)
             {
             case GPS_DECODE_RMC: /*得到GPRMC 信息组*/
                if (gps_GPRMCDecode(nmea, &rmc, NMEA_BUFFER_SIZE,0) == 0)
                {
                    gps_parse_ok++;
                }
                break;
             case GPS_DECODE_GGA: /*得到GPGGA 信息组*/
                if (gps_GPGGADecode(nmea, &gga, NMEA_BUFFER_SIZE) == 0)
                {
                    gps_parse_ok++;
                }
                break;
             case GPS_DECODE_GSV:
                if (ht_StrCmp(nmea + 1, "GP") >= 2)
                {
                   gps_GPGSVDecode(nmea, &GPGSV, NMEA_BUFFER_SIZE);
                }
                else if (ht_StrCmp(nmea + 1, "BD") >= 2)
                {
                   gps_GPGSVDecode(nmea, &BDGSV, NMEA_BUFFER_SIZE);
                }
                gps_parse_ok++;
                break;
             case GPS_DECODE_TXT:
             case GPS_DECODE_GSA:
             case GPS_DECODE_OTHER:
                break;
             default:
                bDone = FALSE;
                break;
             }
          }
       }
    }


};

#endif // GPS_HELPER_H
