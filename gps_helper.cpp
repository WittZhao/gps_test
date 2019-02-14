#include "gps_helper.h"

gps_helper::gps_helper()
{

}

gps_helper::~gps_helper()
{

}
rmc_t gps_helper::rmc;
gsv_t gps_helper::GPGSV;
gsv_t gps_helper::BDGSV;
gga_t gps_helper::gga;
gps_test_param_st gps_helper::gps_param;

int gps_helper::gps_parse_ok;
