/*The file is auto generated by tools, don't modify it manully.*/
#include <hsad/config_data.h>
#include <hsad/config_general_struct.h>
config_pair  u9200s_1800mAh_hw_configs_common [] = {
    {"audio/enhance_type", (const unsigned int)(unsigned int*)"dts", E_CONFIG_DATA_TYPE_STRING }, 
    {"audio/vibrator_driver", (const unsigned int)(unsigned int*)"AUX3", E_CONFIG_DATA_TYPE_STRING }, 
    {"gas_gauge/capacity", (unsigned int)1800, E_CONFIG_DATA_TYPE_INT }, 
    {"gas_gauge/charge_current", (unsigned int)1000, E_CONFIG_DATA_TYPE_INT }, 
    {"gas_gauge/charge_voltage", (unsigned int)4340, E_CONFIG_DATA_TYPE_INT }, 
    {"gas_gauge/firmware_name", (const unsigned int)(unsigned int*)"VIVA_LG_1800", E_CONFIG_DATA_TYPE_STRING }, 
    {"gas_gauge/version", (unsigned int)0x30200a4, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/index", (unsigned int)123, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/init_index", (unsigned int)789, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/name", (const unsigned int)(unsigned int*)"spanel", E_CONFIG_DATA_TYPE_STRING }, 
    {"lcd/number", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd/pin_id", (unsigned int)456, E_CONFIG_DATA_TYPE_INT }, 
    {"lcd_type/video_type", (unsigned int)0, E_CONFIG_DATA_TYPE_BOOL }, 
    {"leds/leds_type", (const unsigned int)(unsigned int*)"tca6507", E_CONFIG_DATA_TYPE_STRING }, 
    {"mhl/ci2ca_is_pull_up", (unsigned int)1, E_CONFIG_DATA_TYPE_BOOL }, 
    {"mhl/mhl_connect", (unsigned int)0, E_CONFIG_DATA_TYPE_BOOL }, 
    {"pm/current_limt", (const unsigned int)(unsigned int*)"LIMIT_700MA", E_CONFIG_DATA_TYPE_STRING }, 
    {"proximity/threshold", (unsigned int)0, E_CONFIG_DATA_TYPE_INT }, 
    {"sysen/board_value", (unsigned int)0x01, E_CONFIG_DATA_TYPE_INT }, 
    {"tklight/touchkeylight", (unsigned int)0, E_CONFIG_DATA_TYPE_BOOL }, 
    {"touchscreen/front", (unsigned int)0, E_CONFIG_DATA_TYPE_BOOL }, 
    {"touchscreen/size", (const unsigned int)(unsigned int*)"WVGA", E_CONFIG_DATA_TYPE_STRING }, 
    {"usbeye/trim_value", (unsigned int)0x24, E_CONFIG_DATA_TYPE_INT }, 
    {"xmd/xmd_ready_gpio_enable", (unsigned int)1, E_CONFIG_DATA_TYPE_INT }, 
    {0, 0, 0}
 };
struct board_id_general_struct u9200s_1800mAh_hw_configs= {
	.name=COMMON_MODULE_NAME,
	.board_id=BOARD_ID_U9200S_1800MAH,
	.data_array={.config_pair_ptr=u9200s_1800mAh_hw_configs_common},
	.list={NULL,NULL},
};