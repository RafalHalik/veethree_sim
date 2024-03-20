#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/display.h>
#include <zephyr/drivers/gpio.h>
#include <lvgl.h>
#include <stdio.h>
#include <string.h>
#include <zephyr/kernel.h>
#include <lvgl_input_device.h>

#define BUTTON1 0x0001
#define BUTTON2 0x0002
#define BUTTON3 0x0004
#define BUTTON4 0x0008
#define BUTTON5 0x0010

extern int BTN_FLAGS_TEST;

void create_sim(void);
void draw_canvas(void);
void button_bar(void);
