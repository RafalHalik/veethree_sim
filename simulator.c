
#include "include/simulator.h"


int BTN_FLAGS_TEST = 0;

static void event_cb(lv_event_t * e)
{
	
    /*The original target of the event. Can be the buttons or the container*/
    lv_obj_t * target = lv_event_get_target(e);
 	int id = lv_btnmatrix_get_selected_btn(target);
    /*The current target is always the container as the event is added to it*/
    lv_obj_t * cont = lv_event_get_current_target(e);
	lv_event_code_t code = lv_event_get_code(e);

	if(code == LV_EVENT_RELEASED )
	{
		BTN_FLAGS_TEST = 0;
	}
	else
	{
		switch(id)
		{
			case 0:
				BTN_FLAGS_TEST |=  BUTTON1;
			break;
			case 1:
				BTN_FLAGS_TEST |=  BUTTON2;
			break;
			case 2:
				BTN_FLAGS_TEST |=  BUTTON3;
			break;
			case 3:
				BTN_FLAGS_TEST |=  BUTTON4;
			break;
			case 4:
				BTN_FLAGS_TEST |=  BUTTON5;
			break;
			default:
				BTN_FLAGS_TEST = 0;
			break;
		}
	}
}

void create_sim(void)
{
	draw_canvas();
	button_bar();

	//Update current lv_scr_act() layout.
	lv_obj_update_layout(lv_scr_act());
}

void draw_canvas(void)
{
	//Write codes screen_canvas_1
	lv_obj_t *screen_canvas_1 = lv_canvas_create(lv_scr_act());
	static lv_color_t buf_screen_canvas_1[580*475*4];
	lv_canvas_set_buffer(screen_canvas_1, buf_screen_canvas_1, 576, 471, LV_IMG_CF_TRUE_COLOR_ALPHA);
	lv_canvas_fill_bg(screen_canvas_1, lv_color_hex(0x0a0a0a), 255);
	//Canvas draw rectangle
	lv_draw_rect_dsc_t rect_dsc_0;
	lv_draw_rect_dsc_init(&rect_dsc_0);
	rect_dsc_0.radius = 0;
	rect_dsc_0.bg_opa = 255;
	rect_dsc_0.bg_color = lv_color_hex(0xffffff);
	rect_dsc_0.bg_grad.dir = LV_GRAD_DIR_NONE;
	rect_dsc_0.border_width = 0;
	rect_dsc_0.border_opa = 255;
	rect_dsc_0.border_color = lv_color_hex(0xffffff);
	lv_canvas_draw_rect(screen_canvas_1, 48, 48, 480, 272, &rect_dsc_0);

	//Canvas draw rectangle
	lv_draw_rect_dsc_t rect_dsc_1;
	lv_draw_rect_dsc_init(&rect_dsc_1);
	rect_dsc_1.radius = 0;
	rect_dsc_1.bg_opa = 255;
	rect_dsc_1.bg_color = lv_color_hex(0x1C1C1C);
	rect_dsc_1.bg_grad.dir = LV_GRAD_DIR_NONE;
	rect_dsc_1.border_width = 0;
	rect_dsc_1.border_opa = 255;
	rect_dsc_1.border_color = lv_color_hex(0xffffff);
	lv_canvas_draw_rect(screen_canvas_1, 0, 471, 576, 120, &rect_dsc_1);

	lv_obj_set_pos(screen_canvas_1, 2, 2);
	lv_obj_set_size(screen_canvas_1, 576, 471);
	lv_obj_set_scrollbar_mode(screen_canvas_1, LV_SCROLLBAR_MODE_OFF);
}

void button_bar(void)
{
		//Write codes screen_btnm_1
	lv_obj_t *screen_btnm_1 = lv_btnmatrix_create(lv_scr_act());
	static const char *screen_btnm_1_text_map[] = {"  ", "  ", "  ", "  ", "  "};
	lv_btnmatrix_set_map(screen_btnm_1, screen_btnm_1_text_map);
	lv_obj_set_pos(screen_btnm_1, 2, 360);
	lv_obj_set_size(screen_btnm_1, 576, 113);

	//Write style for screen_btnm_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(screen_btnm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(screen_btnm_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(screen_btnm_1, 25, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(screen_btnm_1, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(screen_btnm_1, 50, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_row(screen_btnm_1, 30, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_column(screen_btnm_1, 40, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(screen_btnm_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(screen_btnm_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(screen_btnm_1, lv_color_hex(0x1C1C1C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(screen_btnm_1, lv_color_hex(0x1C1C1C), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(screen_btnm_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(screen_btnm_1, lv_color_hex(0x0a0a0a), LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for screen_btnm_1, Part: LV_PART_ITEMS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(screen_btnm_1, 10, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(screen_btnm_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(screen_btnm_1, lv_color_hex(0x5E5E5E), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(screen_btnm_1, LV_BORDER_SIDE_FULL, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(screen_btnm_1, lv_color_hex(0xffffff), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(screen_btnm_1, 32, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(screen_btnm_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(screen_btnm_1, lv_color_hex(0x1C1C1C), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(screen_btnm_1, 1, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(screen_btnm_1, lv_color_hex(0x0a0a0a), LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(screen_btnm_1, 255, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(screen_btnm_1, 3, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(screen_btnm_1, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(screen_btnm_1, 0, LV_PART_ITEMS|LV_STATE_DEFAULT);
	lv_obj_add_event_cb(screen_btnm_1, event_cb, LV_EVENT_CLICKED , NULL);
    
}
