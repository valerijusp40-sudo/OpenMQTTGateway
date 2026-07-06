#ifndef User_config_h
#define User_config_h

#define ESP32
#define GATEWAY_NAME "RF-Analyzer"
#define VERSION "1.0"

// Включаем только CC1101 (433 МГц)
#define ZgatewayRF "CC1101"
#define RF_EMITTER_PIN 0
#define RF_RECEIVER_PIN 4

// Отключаем все остальные модули
#define ZgatewayIR ""
#define ZgatewayBT ""
#define ZgatewayLORA ""
#define ZgatewayPilight ""
#define ZgatewayRF2 ""

// Пины CC1101 (ваши)
#define SCK_PIN 18
#define MISO_PIN 19
#define MOSI_PIN 23
#define CS_PIN 5

// Включаем дисплей ILI9341 с вашими пинами
#define ZdisplayILI9341
#define TFT_MOSI 13
#define TFT_MISO 12
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC   21
#define TFT_RST  17
#define TFT_ROTATION 0
#define DISPLAY_WIDTH 240
#define DISPLAY_HEIGHT 320

// Отключаем MQTT (прибор работает автономно)
#define NO_MQTT
#define OPERATOR_MODE "screen"

// Включаем максимальное усиление LNA (будет добавлено в setup)
#define CC1101_MAX_GAIN

#endif
