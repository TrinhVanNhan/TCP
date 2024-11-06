#ifndef WIFI_CONNECT_H
#define WIFI_CONNECT_H
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"
#include "esp_wifi.h"
#include "esp_event.h"

#include "lwip/err.h"
#include "lwip/sys.h"

#include "esp_log.h"

#define WIFI_SSID "CTY ROBOTICS AUBOT"
#define WIFI_PASSWORD  "123456789"
#define CONNECT_RETRY   10

static const char *TAG_WIFI = "WIFI_LIB";

#define WIFI_CONNECTED_BIT BIT0
#define WIFI_FAIL_BIT BIT1
#define WIFI_DISCONNECTED_BIT BIT2

wifi_config_t wifi_config = 
{
        .sta = 
        {
            .ssid = WIFI_SSID,
            .password = WIFI_PASSWORD,
        },
};// truong cau hinh AP de ket noi
esp_err_t wifi_connect(void);
#endif