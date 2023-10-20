# Copyright 2022 NXP
# SPDX-License-Identifier: MIT
# The auto-generated can only be used on NXP devices

import SDL
import utime as time
import usys as sys
import lvgl as lv
import lodepng as png
import ustruct

lv.init()
SDL.init(w=1280,h=720)

# Register SDL display driver.
disp_buf1 = lv.disp_draw_buf_t()
buf1_1 = bytearray(1280*10)
disp_buf1.init(buf1_1, None, len(buf1_1)//4)
disp_drv = lv.disp_drv_t()
disp_drv.init()
disp_drv.draw_buf = disp_buf1
disp_drv.flush_cb = SDL.monitor_flush
disp_drv.hor_res = 1280
disp_drv.ver_res = 720
disp_drv.register()

# Regsiter SDL mouse driver
indev_drv = lv.indev_drv_t()
indev_drv.init() 
indev_drv.type = lv.INDEV_TYPE.POINTER
indev_drv.read_cb = SDL.mouse_read
indev_drv.register()

# Below: Taken from https://github.com/lvgl/lv_binding_micropython/blob/master/driver/js/imagetools.py#L22-L94

COLOR_SIZE = lv.color_t.__SIZE__
COLOR_IS_SWAPPED = hasattr(lv.color_t().ch,'green_h')

class lodepng_error(RuntimeError):
    def __init__(self, err):
        if type(err) is int:
            super().__init__(png.error_text(err))
        else:
            super().__init__(err)

# Parse PNG file header
# Taken from https://github.com/shibukawa/imagesize_py/blob/ffef30c1a4715c5acf90e8945ceb77f4a2ed2d45/imagesize.py#L63-L85

def get_png_info(decoder, src, header):
    # Only handle variable image types

    if lv.img.src_get_type(src) != lv.img.SRC.VARIABLE:
        return lv.RES.INV

    data = lv.img_dsc_t.__cast__(src).data
    if data == None:
        return lv.RES.INV

    png_header = bytes(data.__dereference__(24))

    if png_header.startswith(b'\211PNG\r\n\032\n'):
        if png_header[12:16] == b'IHDR':
            start = 16
        # Maybe this is for an older PNG version.
        else:
            start = 8
        try:
            width, height = ustruct.unpack(">LL", png_header[start:start+8])
        except ustruct.error:
            return lv.RES.INV
    else:
        return lv.RES.INV

    header.always_zero = 0
    header.w = width
    header.h = height
    header.cf = lv.img.CF.TRUE_COLOR_ALPHA

    return lv.RES.OK

def convert_rgba8888_to_bgra8888(img_view):
    for i in range(0, len(img_view), lv.color_t.__SIZE__):
        ch = lv.color_t.__cast__(img_view[i:i]).ch
        ch.red, ch.blue = ch.blue, ch.red

# Read and parse PNG file

def open_png(decoder, dsc):
    img_dsc = lv.img_dsc_t.__cast__(dsc.src)
    png_data = img_dsc.data
    png_size = img_dsc.data_size
    png_decoded = png.C_Pointer()
    png_width = png.C_Pointer()
    png_height = png.C_Pointer()
    error = png.decode32(png_decoded, png_width, png_height, png_data, png_size)
    if error:
        raise lodepng_error(error)
    img_size = png_width.int_val * png_height.int_val * 4
    img_data = png_decoded.ptr_val
    img_view = img_data.__dereference__(img_size)

    if COLOR_SIZE == 4:
        convert_rgba8888_to_bgra8888(img_view)
    else:
        raise lodepng_error("Error: Color mode not supported yet!")

    dsc.img_data = img_data
    return lv.RES.OK

# Above: Taken from https://github.com/lvgl/lv_binding_micropython/blob/master/driver/js/imagetools.py#L22-L94

decoder = lv.img.decoder_create()
decoder.info_cb = get_png_info
decoder.open_cb = open_png

def anim_x_cb(obj, v):
    obj.set_x(v)

def anim_y_cb(obj, v):
    obj.set_y(v)

def ta_event_cb(e,kb):
    code = e.get_code()
    ta = e.get_target()
    if code == lv.EVENT.FOCUSED:
        kb.set_textarea(ta)
        kb.move_foreground()
        kb.clear_flag(lv.obj.FLAG.HIDDEN)

    if code == lv.EVENT.DEFOCUSED:
        kb.set_textarea(None)
        kb.move_background()
        kb.add_flag(lv.obj.FLAG.HIDDEN)


screen = lv.obj()
screen.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
# create style style_screen_main_main_default
style_screen_main_main_default = lv.style_t()
style_screen_main_main_default.init()
style_screen_main_main_default.set_bg_color(lv.color_make(0x00,0x00,0x00))
style_screen_main_main_default.set_bg_opa(255)

# add style for screen
screen.add_style(style_screen_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_frame2px = lv.img(screen)
screen_frame2px.set_pos(int(100),int(150))
screen_frame2px.set_size(721,324)
screen_frame2px.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_frame2px.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-720732710.png','rb') as f:
        screen_frame2px_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-720732710.png')
    sys.exit()

screen_frame2px_img = lv.img_dsc_t({
  'data_size': len(screen_frame2px_img_data),
  'header': {'always_zero': 0, 'w': 721, 'h': 324, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_frame2px_img_data
})

screen_frame2px.set_src(screen_frame2px_img)
screen_frame2px.set_pivot(0,0)
screen_frame2px.set_angle(0)
# create style style_screen_frame2px_main_main_default
style_screen_frame2px_main_main_default = lv.style_t()
style_screen_frame2px_main_main_default.init()
style_screen_frame2px_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_frame2px_main_main_default.set_img_recolor_opa(0)
style_screen_frame2px_main_main_default.set_img_opa(255)

# add style for screen_frame2px
screen_frame2px.add_style(style_screen_frame2px_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_RPMx1000 = lv.img(screen)
screen_RPMx1000.set_pos(int(111),int(295))
screen_RPMx1000.set_size(42,34)
screen_RPMx1000.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_RPMx1000.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-760579659.png','rb') as f:
        screen_RPMx1000_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-760579659.png')
    sys.exit()

screen_RPMx1000_img = lv.img_dsc_t({
  'data_size': len(screen_RPMx1000_img_data),
  'header': {'always_zero': 0, 'w': 42, 'h': 34, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_RPMx1000_img_data
})

screen_RPMx1000.set_src(screen_RPMx1000_img)
screen_RPMx1000.set_pivot(0,0)
screen_RPMx1000.set_angle(0)
# create style style_screen_rpmx1000_main_main_default
style_screen_rpmx1000_main_main_default = lv.style_t()
style_screen_rpmx1000_main_main_default.init()
style_screen_rpmx1000_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_rpmx1000_main_main_default.set_img_recolor_opa(0)
style_screen_rpmx1000_main_main_default.set_img_opa(255)

# add style for screen_RPMx1000
screen_RPMx1000.add_style(style_screen_rpmx1000_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_div = lv.img(screen)
screen_div.set_pos(int(166),int(311))
screen_div.set_size(229,4)
screen_div.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_div.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1198299422.png','rb') as f:
        screen_div_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1198299422.png')
    sys.exit()

screen_div_img = lv.img_dsc_t({
  'data_size': len(screen_div_img_data),
  'header': {'always_zero': 0, 'w': 229, 'h': 4, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_div_img_data
})

screen_div.set_src(screen_div_img)
screen_div.set_pivot(0,0)
screen_div.set_angle(0)
# create style style_screen_div_main_main_default
style_screen_div_main_main_default = lv.style_t()
style_screen_div_main_main_default.init()
style_screen_div_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_div_main_main_default.set_img_recolor_opa(0)
style_screen_div_main_main_default.set_img_opa(255)

# add style for screen_div
screen_div.add_style(style_screen_div_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_ticks_base = lv.img(screen)
screen_ticks_base.set_pos(int(75),int(126))
screen_ticks_base.set_size(346,369)
screen_ticks_base.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_ticks_base.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp326310089.png','rb') as f:
        screen_ticks_base_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp326310089.png')
    sys.exit()

screen_ticks_base_img = lv.img_dsc_t({
  'data_size': len(screen_ticks_base_img_data),
  'header': {'always_zero': 0, 'w': 346, 'h': 369, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_ticks_base_img_data
})

screen_ticks_base.set_src(screen_ticks_base_img)
screen_ticks_base.set_pivot(0,0)
screen_ticks_base.set_angle(0)
# create style style_screen_ticks_base_main_main_default
style_screen_ticks_base_main_main_default = lv.style_t()
style_screen_ticks_base_main_main_default.init()
style_screen_ticks_base_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_ticks_base_main_main_default.set_img_recolor_opa(0)
style_screen_ticks_base_main_main_default.set_img_opa(255)

# add style for screen_ticks_base
screen_ticks_base.add_style(style_screen_ticks_base_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num0 = lv.img(screen)
screen_num0.set_pos(int(255),int(497))
screen_num0.set_size(15,27)
screen_num0.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num0.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-2102351285.png','rb') as f:
        screen_num0_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-2102351285.png')
    sys.exit()

screen_num0_img = lv.img_dsc_t({
  'data_size': len(screen_num0_img_data),
  'header': {'always_zero': 0, 'w': 15, 'h': 27, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num0_img_data
})

screen_num0.set_src(screen_num0_img)
screen_num0.set_pivot(0,0)
screen_num0.set_angle(0)
# create style style_screen_num0_main_main_default
style_screen_num0_main_main_default = lv.style_t()
style_screen_num0_main_main_default.init()
style_screen_num0_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num0_main_main_default.set_img_recolor_opa(0)
style_screen_num0_main_main_default.set_img_opa(255)

# add style for screen_num0
screen_num0.add_style(style_screen_num0_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_outer2px_1 = lv.img(screen)
screen_outer2px_1.set_pos(int(177),int(486))
screen_outer2px_1.set_size(73,28)
screen_outer2px_1.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_outer2px_1.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1834232607.png','rb') as f:
        screen_outer2px_1_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1834232607.png')
    sys.exit()

screen_outer2px_1_img = lv.img_dsc_t({
  'data_size': len(screen_outer2px_1_img_data),
  'header': {'always_zero': 0, 'w': 73, 'h': 28, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_outer2px_1_img_data
})

screen_outer2px_1.set_src(screen_outer2px_1_img)
screen_outer2px_1.set_pivot(0,0)
screen_outer2px_1.set_angle(0)
# create style style_screen_outer2px_1_main_main_default
style_screen_outer2px_1_main_main_default = lv.style_t()
style_screen_outer2px_1_main_main_default.init()
style_screen_outer2px_1_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_outer2px_1_main_main_default.set_img_recolor_opa(0)
style_screen_outer2px_1_main_main_default.set_img_opa(255)

# add style for screen_outer2px_1
screen_outer2px_1.add_style(style_screen_outer2px_1_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num2 = lv.img(screen)
screen_num2.set_pos(int(162),int(474))
screen_num2.set_size(15,26)
screen_num2.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num2.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp979854924.png','rb') as f:
        screen_num2_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp979854924.png')
    sys.exit()

screen_num2_img = lv.img_dsc_t({
  'data_size': len(screen_num2_img_data),
  'header': {'always_zero': 0, 'w': 15, 'h': 26, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num2_img_data
})

screen_num2.set_src(screen_num2_img)
screen_num2.set_pivot(0,0)
screen_num2.set_angle(0)
# create style style_screen_num2_main_main_default
style_screen_num2_main_main_default = lv.style_t()
style_screen_num2_main_main_default.init()
style_screen_num2_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num2_main_main_default.set_img_recolor_opa(0)
style_screen_num2_main_main_default.set_img_opa(255)

# add style for screen_num2
screen_num2.add_style(style_screen_num2_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_outer2px_2 = lv.img(screen)
screen_outer2px_2.set_pos(int(103),int(427))
screen_outer2px_2.set_size(58,59)
screen_outer2px_2.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_outer2px_2.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-364125625.png','rb') as f:
        screen_outer2px_2_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-364125625.png')
    sys.exit()

screen_outer2px_2_img = lv.img_dsc_t({
  'data_size': len(screen_outer2px_2_img_data),
  'header': {'always_zero': 0, 'w': 58, 'h': 59, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_outer2px_2_img_data
})

screen_outer2px_2.set_src(screen_outer2px_2_img)
screen_outer2px_2.set_pivot(0,0)
screen_outer2px_2.set_angle(0)
# create style style_screen_outer2px_2_main_main_default
style_screen_outer2px_2_main_main_default = lv.style_t()
style_screen_outer2px_2_main_main_default.init()
style_screen_outer2px_2_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_outer2px_2_main_main_default.set_img_recolor_opa(0)
style_screen_outer2px_2_main_main_default.set_img_opa(255)

# add style for screen_outer2px_2
screen_outer2px_2.add_style(style_screen_outer2px_2_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num4 = lv.img(screen)
screen_num4.set_pos(int(86),int(406))
screen_num4.set_size(17,26)
screen_num4.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num4.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-568540208.png','rb') as f:
        screen_num4_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-568540208.png')
    sys.exit()

screen_num4_img = lv.img_dsc_t({
  'data_size': len(screen_num4_img_data),
  'header': {'always_zero': 0, 'w': 17, 'h': 26, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num4_img_data
})

screen_num4.set_src(screen_num4_img)
screen_num4.set_pivot(0,0)
screen_num4.set_angle(0)
# create style style_screen_num4_main_main_default
style_screen_num4_main_main_default = lv.style_t()
style_screen_num4_main_main_default.init()
style_screen_num4_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num4_main_main_default.set_img_recolor_opa(0)
style_screen_num4_main_main_default.set_img_opa(255)

# add style for screen_num4
screen_num4.add_style(style_screen_num4_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_outer2px_3 = lv.img(screen)
screen_outer2px_3.set_pos(int(63),int(336))
screen_outer2px_3.set_size(28,73)
screen_outer2px_3.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_outer2px_3.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1556036707.png','rb') as f:
        screen_outer2px_3_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1556036707.png')
    sys.exit()

screen_outer2px_3_img = lv.img_dsc_t({
  'data_size': len(screen_outer2px_3_img_data),
  'header': {'always_zero': 0, 'w': 28, 'h': 73, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_outer2px_3_img_data
})

screen_outer2px_3.set_src(screen_outer2px_3_img)
screen_outer2px_3.set_pivot(0,0)
screen_outer2px_3.set_angle(0)
# create style style_screen_outer2px_3_main_main_default
style_screen_outer2px_3_main_main_default = lv.style_t()
style_screen_outer2px_3_main_main_default.init()
style_screen_outer2px_3_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_outer2px_3_main_main_default.set_img_recolor_opa(0)
style_screen_outer2px_3_main_main_default.set_img_opa(255)

# add style for screen_outer2px_3
screen_outer2px_3.add_style(style_screen_outer2px_3_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num6 = lv.img(screen)
screen_num6.set_pos(int(58),int(302))
screen_num6.set_size(14,27)
screen_num6.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num6.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-836233584.png','rb') as f:
        screen_num6_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-836233584.png')
    sys.exit()

screen_num6_img = lv.img_dsc_t({
  'data_size': len(screen_num6_img_data),
  'header': {'always_zero': 0, 'w': 14, 'h': 27, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num6_img_data
})

screen_num6.set_src(screen_num6_img)
screen_num6.set_pivot(0,0)
screen_num6.set_angle(0)
# create style style_screen_num6_main_main_default
style_screen_num6_main_main_default = lv.style_t()
style_screen_num6_main_main_default.init()
style_screen_num6_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num6_main_main_default.set_img_recolor_opa(0)
style_screen_num6_main_main_default.set_img_opa(255)

# add style for screen_num6
screen_num6.add_style(style_screen_num6_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_outer2px_4 = lv.img(screen)
screen_outer2px_4.set_pos(int(60),int(222))
screen_outer2px_4.set_size(28,73)
screen_outer2px_4.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_outer2px_4.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-521172636.png','rb') as f:
        screen_outer2px_4_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-521172636.png')
    sys.exit()

screen_outer2px_4_img = lv.img_dsc_t({
  'data_size': len(screen_outer2px_4_img_data),
  'header': {'always_zero': 0, 'w': 28, 'h': 73, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_outer2px_4_img_data
})

screen_outer2px_4.set_src(screen_outer2px_4_img)
screen_outer2px_4.set_pivot(0,0)
screen_outer2px_4.set_angle(0)
# create style style_screen_outer2px_4_main_main_default
style_screen_outer2px_4_main_main_default = lv.style_t()
style_screen_outer2px_4_main_main_default.init()
style_screen_outer2px_4_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_outer2px_4_main_main_default.set_img_recolor_opa(0)
style_screen_outer2px_4_main_main_default.set_img_opa(255)

# add style for screen_outer2px_4
screen_outer2px_4.add_style(style_screen_outer2px_4_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num8 = lv.img(screen)
screen_num8.set_pos(int(80),int(195))
screen_num8.set_size(16,27)
screen_num8.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num8.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1910338580.png','rb') as f:
        screen_num8_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1910338580.png')
    sys.exit()

screen_num8_img = lv.img_dsc_t({
  'data_size': len(screen_num8_img_data),
  'header': {'always_zero': 0, 'w': 16, 'h': 27, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num8_img_data
})

screen_num8.set_src(screen_num8_img)
screen_num8.set_pivot(0,0)
screen_num8.set_angle(0)
# create style style_screen_num8_main_main_default
style_screen_num8_main_main_default = lv.style_t()
style_screen_num8_main_main_default.init()
style_screen_num8_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num8_main_main_default.set_img_recolor_opa(0)
style_screen_num8_main_main_default.set_img_opa(255)

# add style for screen_num8
screen_num8.add_style(style_screen_num8_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_outer2px_5 = lv.img(screen)
screen_outer2px_5.set_pos(int(96),int(142))
screen_outer2px_5.set_size(58,59)
screen_outer2px_5.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_outer2px_5.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1994180938.png','rb') as f:
        screen_outer2px_5_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1994180938.png')
    sys.exit()

screen_outer2px_5_img = lv.img_dsc_t({
  'data_size': len(screen_outer2px_5_img_data),
  'header': {'always_zero': 0, 'w': 58, 'h': 59, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_outer2px_5_img_data
})

screen_outer2px_5.set_src(screen_outer2px_5_img)
screen_outer2px_5.set_pivot(0,0)
screen_outer2px_5.set_angle(0)
# create style style_screen_outer2px_5_main_main_default
style_screen_outer2px_5_main_main_default = lv.style_t()
style_screen_outer2px_5_main_main_default.init()
style_screen_outer2px_5_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_outer2px_5_main_main_default.set_img_recolor_opa(0)
style_screen_outer2px_5_main_main_default.set_img_opa(255)

# add style for screen_outer2px_5
screen_outer2px_5.add_style(style_screen_outer2px_5_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num10 = lv.img(screen)
screen_num10.set_pos(int(150),int(116))
screen_num10.set_size(27,26)
screen_num10.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num10.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-201390378.png','rb') as f:
        screen_num10_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-201390378.png')
    sys.exit()

screen_num10_img = lv.img_dsc_t({
  'data_size': len(screen_num10_img_data),
  'header': {'always_zero': 0, 'w': 27, 'h': 26, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num10_img_data
})

screen_num10.set_src(screen_num10_img)
screen_num10.set_pivot(0,0)
screen_num10.set_angle(0)
# create style style_screen_num10_main_main_default
style_screen_num10_main_main_default = lv.style_t()
style_screen_num10_main_main_default.init()
style_screen_num10_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num10_main_main_default.set_img_recolor_opa(0)
style_screen_num10_main_main_default.set_img_opa(255)

# add style for screen_num10
screen_num10.add_style(style_screen_num10_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_outer2px_6 = lv.img(screen)
screen_outer2px_6.set_pos(int(180),int(105))
screen_outer2px_6.set_size(73,28)
screen_outer2px_6.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_outer2px_6.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp664622566.png','rb') as f:
        screen_outer2px_6_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp664622566.png')
    sys.exit()

screen_outer2px_6_img = lv.img_dsc_t({
  'data_size': len(screen_outer2px_6_img_data),
  'header': {'always_zero': 0, 'w': 73, 'h': 28, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_outer2px_6_img_data
})

screen_outer2px_6.set_src(screen_outer2px_6_img)
screen_outer2px_6.set_pivot(0,0)
screen_outer2px_6.set_angle(0)
# create style style_screen_outer2px_6_main_main_default
style_screen_outer2px_6_main_main_default = lv.style_t()
style_screen_outer2px_6_main_main_default.init()
style_screen_outer2px_6_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_outer2px_6_main_main_default.set_img_recolor_opa(0)
style_screen_outer2px_6_main_main_default.set_img_opa(255)

# add style for screen_outer2px_6
screen_outer2px_6.add_style(style_screen_outer2px_6_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num12 = lv.img(screen)
screen_num12.set_pos(int(252),int(93))
screen_num12.set_size(26,27)
screen_num12.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num12.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp2136939800.png','rb') as f:
        screen_num12_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp2136939800.png')
    sys.exit()

screen_num12_img = lv.img_dsc_t({
  'data_size': len(screen_num12_img_data),
  'header': {'always_zero': 0, 'w': 26, 'h': 27, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num12_img_data
})

screen_num12.set_src(screen_num12_img)
screen_num12.set_pivot(0,0)
screen_num12.set_angle(0)
# create style style_screen_num12_main_main_default
style_screen_num12_main_main_default = lv.style_t()
style_screen_num12_main_main_default.init()
style_screen_num12_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num12_main_main_default.set_img_recolor_opa(0)
style_screen_num12_main_main_default.set_img_opa(255)

# add style for screen_num12
screen_num12.add_style(style_screen_num12_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_outer2px_7 = lv.img(screen)
screen_outer2px_7.set_pos(int(280),int(107))
screen_outer2px_7.set_size(73,28)
screen_outer2px_7.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_outer2px_7.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1412586777.png','rb') as f:
        screen_outer2px_7_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1412586777.png')
    sys.exit()

screen_outer2px_7_img = lv.img_dsc_t({
  'data_size': len(screen_outer2px_7_img_data),
  'header': {'always_zero': 0, 'w': 73, 'h': 28, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_outer2px_7_img_data
})

screen_outer2px_7.set_src(screen_outer2px_7_img)
screen_outer2px_7.set_pivot(0,0)
screen_outer2px_7.set_angle(0)
# create style style_screen_outer2px_7_main_main_default
style_screen_outer2px_7_main_main_default = lv.style_t()
style_screen_outer2px_7_main_main_default.init()
style_screen_outer2px_7_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_outer2px_7_main_main_default.set_img_recolor_opa(0)
style_screen_outer2px_7_main_main_default.set_img_opa(255)

# add style for screen_outer2px_7
screen_outer2px_7.add_style(style_screen_outer2px_7_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num14 = lv.img(screen)
screen_num14.set_pos(int(353),int(122))
screen_num14.set_size(29,27)
screen_num14.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num14.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-255927203.png','rb') as f:
        screen_num14_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-255927203.png')
    sys.exit()

screen_num14_img = lv.img_dsc_t({
  'data_size': len(screen_num14_img_data),
  'header': {'always_zero': 0, 'w': 29, 'h': 27, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num14_img_data
})

screen_num14.set_src(screen_num14_img)
screen_num14.set_pivot(0,0)
screen_num14.set_angle(0)
# create style style_screen_num14_main_main_default
style_screen_num14_main_main_default = lv.style_t()
style_screen_num14_main_main_default.init()
style_screen_num14_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num14_main_main_default.set_img_recolor_opa(0)
style_screen_num14_main_main_default.set_img_opa(255)

# add style for screen_num14
screen_num14.add_style(style_screen_num14_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_outer2px_8 = lv.img(screen)
screen_outer2px_8.set_pos(int(376),int(148))
screen_outer2px_8.set_size(58,59)
screen_outer2px_8.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_outer2px_8.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp57520205.png','rb') as f:
        screen_outer2px_8_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp57520205.png')
    sys.exit()

screen_outer2px_8_img = lv.img_dsc_t({
  'data_size': len(screen_outer2px_8_img_data),
  'header': {'always_zero': 0, 'w': 58, 'h': 59, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_outer2px_8_img_data
})

screen_outer2px_8.set_src(screen_outer2px_8_img)
screen_outer2px_8.set_pivot(0,0)
screen_outer2px_8.set_angle(0)
# create style style_screen_outer2px_8_main_main_default
style_screen_outer2px_8_main_main_default = lv.style_t()
style_screen_outer2px_8_main_main_default.init()
style_screen_outer2px_8_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_outer2px_8_main_main_default.set_img_recolor_opa(0)
style_screen_outer2px_8_main_main_default.set_img_opa(255)

# add style for screen_outer2px_8
screen_outer2px_8.add_style(style_screen_outer2px_8_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_num16 = lv.img(screen)
screen_num16.set_pos(int(426),int(205))
screen_num16.set_size(27,27)
screen_num16.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_num16.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1573565149.png','rb') as f:
        screen_num16_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1573565149.png')
    sys.exit()

screen_num16_img = lv.img_dsc_t({
  'data_size': len(screen_num16_img_data),
  'header': {'always_zero': 0, 'w': 27, 'h': 27, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_num16_img_data
})

screen_num16.set_src(screen_num16_img)
screen_num16.set_pivot(0,0)
screen_num16.set_angle(0)
# create style style_screen_num16_main_main_default
style_screen_num16_main_main_default = lv.style_t()
style_screen_num16_main_main_default.init()
style_screen_num16_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_num16_main_main_default.set_img_recolor_opa(0)
style_screen_num16_main_main_default.set_img_opa(255)

# add style for screen_num16
screen_num16.add_style(style_screen_num16_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_signal_left = lv.img(screen)
screen_signal_left.set_pos(int(46),int(46))
screen_signal_left.set_size(48,40)
screen_signal_left.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_signal_left.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1733418128.png','rb') as f:
        screen_signal_left_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1733418128.png')
    sys.exit()

screen_signal_left_img = lv.img_dsc_t({
  'data_size': len(screen_signal_left_img_data),
  'header': {'always_zero': 0, 'w': 48, 'h': 40, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_signal_left_img_data
})

screen_signal_left.set_src(screen_signal_left_img)
screen_signal_left.set_pivot(0,0)
screen_signal_left.set_angle(0)
# create style style_screen_signal_left_main_main_default
style_screen_signal_left_main_main_default = lv.style_t()
style_screen_signal_left_main_main_default.init()
style_screen_signal_left_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_signal_left_main_main_default.set_img_recolor_opa(0)
style_screen_signal_left_main_main_default.set_img_opa(255)

# add style for screen_signal_left
screen_signal_left.add_style(style_screen_signal_left_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_signal_right = lv.img(screen)
screen_signal_right.set_pos(int(387),int(46))
screen_signal_right.set_size(48,40)
screen_signal_right.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_signal_right.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1057022541.png','rb') as f:
        screen_signal_right_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1057022541.png')
    sys.exit()

screen_signal_right_img = lv.img_dsc_t({
  'data_size': len(screen_signal_right_img_data),
  'header': {'always_zero': 0, 'w': 48, 'h': 40, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_signal_right_img_data
})

screen_signal_right.set_src(screen_signal_right_img)
screen_signal_right.set_pivot(0,0)
screen_signal_right.set_angle(0)
# create style style_screen_signal_right_main_main_default
style_screen_signal_right_main_main_default = lv.style_t()
style_screen_signal_right_main_main_default.init()
style_screen_signal_right_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_signal_right_main_main_default.set_img_recolor_opa(0)
style_screen_signal_right_main_main_default.set_img_opa(255)

# add style for screen_signal_right
screen_signal_right.add_style(style_screen_signal_right_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_light_brake = lv.img(screen)
screen_light_brake.set_pos(int(546),int(47))
screen_light_brake.set_size(37,38)
screen_light_brake.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_light_brake.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1383197507.png','rb') as f:
        screen_light_brake_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1383197507.png')
    sys.exit()

screen_light_brake_img = lv.img_dsc_t({
  'data_size': len(screen_light_brake_img_data),
  'header': {'always_zero': 0, 'w': 37, 'h': 38, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_light_brake_img_data
})

screen_light_brake.set_src(screen_light_brake_img)
screen_light_brake.set_pivot(0,0)
screen_light_brake.set_angle(0)
# create style style_screen_light_brake_main_main_default
style_screen_light_brake_main_main_default = lv.style_t()
style_screen_light_brake_main_main_default.init()
style_screen_light_brake_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_light_brake_main_main_default.set_img_recolor_opa(0)
style_screen_light_brake_main_main_default.set_img_opa(255)

# add style for screen_light_brake
screen_light_brake.add_style(style_screen_light_brake_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_light_highbeam = lv.img(screen)
screen_light_highbeam.set_pos(int(618),int(54))
screen_light_highbeam.set_size(42,26)
screen_light_highbeam.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_light_highbeam.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1115560970.png','rb') as f:
        screen_light_highbeam_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1115560970.png')
    sys.exit()

screen_light_highbeam_img = lv.img_dsc_t({
  'data_size': len(screen_light_highbeam_img_data),
  'header': {'always_zero': 0, 'w': 42, 'h': 26, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_light_highbeam_img_data
})

screen_light_highbeam.set_src(screen_light_highbeam_img)
screen_light_highbeam.set_pivot(0,0)
screen_light_highbeam.set_angle(0)
# create style style_screen_light_highbeam_main_main_default
style_screen_light_highbeam_main_main_default = lv.style_t()
style_screen_light_highbeam_main_main_default.init()
style_screen_light_highbeam_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_light_highbeam_main_main_default.set_img_recolor_opa(0)
style_screen_light_highbeam_main_main_default.set_img_opa(255)

# add style for screen_light_highbeam
screen_light_highbeam.add_style(style_screen_light_highbeam_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_light_battery = lv.img(screen)
screen_light_battery.set_pos(int(691),int(52))
screen_light_battery.set_size(45,30)
screen_light_battery.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_light_battery.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp617407028.png','rb') as f:
        screen_light_battery_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp617407028.png')
    sys.exit()

screen_light_battery_img = lv.img_dsc_t({
  'data_size': len(screen_light_battery_img_data),
  'header': {'always_zero': 0, 'w': 45, 'h': 30, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_light_battery_img_data
})

screen_light_battery.set_src(screen_light_battery_img)
screen_light_battery.set_pivot(0,0)
screen_light_battery.set_angle(0)
# create style style_screen_light_battery_main_main_default
style_screen_light_battery_main_main_default = lv.style_t()
style_screen_light_battery_main_main_default.init()
style_screen_light_battery_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_light_battery_main_main_default.set_img_recolor_opa(0)
style_screen_light_battery_main_main_default.set_img_opa(255)

# add style for screen_light_battery
screen_light_battery.add_style(style_screen_light_battery_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_light_ABS = lv.img(screen)
screen_light_ABS.set_pos(int(766),int(51))
screen_light_ABS.set_size(44,32)
screen_light_ABS.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_light_ABS.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-859750342.png','rb') as f:
        screen_light_ABS_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-859750342.png')
    sys.exit()

screen_light_ABS_img = lv.img_dsc_t({
  'data_size': len(screen_light_ABS_img_data),
  'header': {'always_zero': 0, 'w': 44, 'h': 32, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_light_ABS_img_data
})

screen_light_ABS.set_src(screen_light_ABS_img)
screen_light_ABS.set_pivot(0,0)
screen_light_ABS.set_angle(0)
# create style style_screen_light_abs_main_main_default
style_screen_light_abs_main_main_default = lv.style_t()
style_screen_light_abs_main_main_default.init()
style_screen_light_abs_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_light_abs_main_main_default.set_img_recolor_opa(0)
style_screen_light_abs_main_main_default.set_img_opa(255)

# add style for screen_light_ABS
screen_light_ABS.add_style(style_screen_light_abs_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_temp_scale = lv.img(screen)
screen_temp_scale.set_pos(int(501),int(169))
screen_temp_scale.set_size(137,57)
screen_temp_scale.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_temp_scale.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-238179436.png','rb') as f:
        screen_temp_scale_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-238179436.png')
    sys.exit()

screen_temp_scale_img = lv.img_dsc_t({
  'data_size': len(screen_temp_scale_img_data),
  'header': {'always_zero': 0, 'w': 137, 'h': 57, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_temp_scale_img_data
})

screen_temp_scale.set_src(screen_temp_scale_img)
screen_temp_scale.set_pivot(0,0)
screen_temp_scale.set_angle(0)
# create style style_screen_temp_scale_main_main_default
style_screen_temp_scale_main_main_default = lv.style_t()
style_screen_temp_scale_main_main_default.init()
style_screen_temp_scale_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_temp_scale_main_main_default.set_img_recolor_opa(0)
style_screen_temp_scale_main_main_default.set_img_opa(255)

# add style for screen_temp_scale
screen_temp_scale.add_style(style_screen_temp_scale_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_gas_gauge = lv.img(screen)
screen_gas_gauge.set_pos(int(672),int(170))
screen_gas_gauge.set_size(135,57)
screen_gas_gauge.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_gas_gauge.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-912741414.png','rb') as f:
        screen_gas_gauge_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-912741414.png')
    sys.exit()

screen_gas_gauge_img = lv.img_dsc_t({
  'data_size': len(screen_gas_gauge_img_data),
  'header': {'always_zero': 0, 'w': 135, 'h': 57, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_gas_gauge_img_data
})

screen_gas_gauge.set_src(screen_gas_gauge_img)
screen_gas_gauge.set_pivot(0,0)
screen_gas_gauge.set_angle(0)
# create style style_screen_gas_gauge_main_main_default
style_screen_gas_gauge_main_main_default = lv.style_t()
style_screen_gas_gauge_main_main_default.init()
style_screen_gas_gauge_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_gas_gauge_main_main_default.set_img_recolor_opa(0)
style_screen_gas_gauge_main_main_default.set_img_opa(255)

# add style for screen_gas_gauge
screen_gas_gauge.add_style(style_screen_gas_gauge_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_odo = lv.img(screen)
screen_odo.set_pos(int(407),int(512))
screen_odo.set_size(178,37)
screen_odo.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_odo.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1183033964.png','rb') as f:
        screen_odo_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1183033964.png')
    sys.exit()

screen_odo_img = lv.img_dsc_t({
  'data_size': len(screen_odo_img_data),
  'header': {'always_zero': 0, 'w': 178, 'h': 37, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_odo_img_data
})

screen_odo.set_src(screen_odo_img)
screen_odo.set_pivot(0,0)
screen_odo.set_angle(0)
# create style style_screen_odo_main_main_default
style_screen_odo_main_main_default = lv.style_t()
style_screen_odo_main_main_default.init()
style_screen_odo_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_odo_main_main_default.set_img_recolor_opa(0)
style_screen_odo_main_main_default.set_img_opa(255)

# add style for screen_odo
screen_odo.add_style(style_screen_odo_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_trip = lv.img(screen)
screen_trip.set_pos(int(612),int(512))
screen_trip.set_size(200,37)
screen_trip.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_trip.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-460847443.png','rb') as f:
        screen_trip_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-460847443.png')
    sys.exit()

screen_trip_img = lv.img_dsc_t({
  'data_size': len(screen_trip_img_data),
  'header': {'always_zero': 0, 'w': 200, 'h': 37, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_trip_img_data
})

screen_trip.set_src(screen_trip_img)
screen_trip.set_pivot(0,0)
screen_trip.set_angle(0)
# create style style_screen_trip_main_main_default
style_screen_trip_main_main_default = lv.style_t()
style_screen_trip_main_main_default.init()
style_screen_trip_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_trip_main_main_default.set_img_recolor_opa(0)
style_screen_trip_main_main_default.set_img_opa(255)

# add style for screen_trip
screen_trip.add_style(style_screen_trip_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_bearing2 = lv.img(screen)
screen_bearing2.set_pos(int(474),int(287))
screen_bearing2.set_size(143,107)
screen_bearing2.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_bearing2.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp31685242.png','rb') as f:
        screen_bearing2_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp31685242.png')
    sys.exit()

screen_bearing2_img = lv.img_dsc_t({
  'data_size': len(screen_bearing2_img_data),
  'header': {'always_zero': 0, 'w': 143, 'h': 107, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_bearing2_img_data
})

screen_bearing2.set_src(screen_bearing2_img)
screen_bearing2.set_pivot(0,0)
screen_bearing2.set_angle(0)
# create style style_screen_bearing2_main_main_default
style_screen_bearing2_main_main_default = lv.style_t()
style_screen_bearing2_main_main_default.init()
style_screen_bearing2_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_bearing2_main_main_default.set_img_recolor_opa(0)
style_screen_bearing2_main_main_default.set_img_opa(255)

# add style for screen_bearing2
screen_bearing2.add_style(style_screen_bearing2_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_compass = lv.img(screen)
screen_compass.set_pos(int(672),int(284))
screen_compass.set_size(110,110)
screen_compass.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_compass.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1449616516.png','rb') as f:
        screen_compass_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1449616516.png')
    sys.exit()

screen_compass_img = lv.img_dsc_t({
  'data_size': len(screen_compass_img_data),
  'header': {'always_zero': 0, 'w': 110, 'h': 110, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_compass_img_data
})

screen_compass.set_src(screen_compass_img)
screen_compass.set_pivot(0,0)
screen_compass.set_angle(0)
# create style style_screen_compass_main_main_default
style_screen_compass_main_main_default = lv.style_t()
style_screen_compass_main_main_default.init()
style_screen_compass_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_compass_main_main_default.set_img_recolor_opa(0)
style_screen_compass_main_main_default.set_img_opa(255)

# add style for screen_compass
screen_compass.add_style(style_screen_compass_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_compass_pointer = lv.img(screen)
screen_compass_pointer.set_pos(int(720),int(272))
screen_compass_pointer.set_size(14,12)
screen_compass_pointer.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_compass_pointer.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1401799878.png','rb') as f:
        screen_compass_pointer_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1401799878.png')
    sys.exit()

screen_compass_pointer_img = lv.img_dsc_t({
  'data_size': len(screen_compass_pointer_img_data),
  'header': {'always_zero': 0, 'w': 14, 'h': 12, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_compass_pointer_img_data
})

screen_compass_pointer.set_src(screen_compass_pointer_img)
screen_compass_pointer.set_pivot(7,67)
screen_compass_pointer.set_angle(0)
# create style style_screen_compass_pointer_main_main_default
style_screen_compass_pointer_main_main_default = lv.style_t()
style_screen_compass_pointer_main_main_default.init()
style_screen_compass_pointer_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_compass_pointer_main_main_default.set_img_recolor_opa(0)
style_screen_compass_pointer_main_main_default.set_img_opa(255)

# add style for screen_compass_pointer
screen_compass_pointer.add_style(style_screen_compass_pointer_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick1 = lv.img(screen)
screen_tick1.set_pos(int(255),int(475))
screen_tick1.set_size(9,20)
screen_tick1.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick1.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1654814619.png','rb') as f:
        screen_tick1_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1654814619.png')
    sys.exit()

screen_tick1_img = lv.img_dsc_t({
  'data_size': len(screen_tick1_img_data),
  'header': {'always_zero': 0, 'w': 9, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick1_img_data
})

screen_tick1.set_src(screen_tick1_img)
screen_tick1.set_pivot(0,0)
screen_tick1.set_angle(0)
# create style style_screen_tick1_main_main_default
style_screen_tick1_main_main_default = lv.style_t()
style_screen_tick1_main_main_default.init()
style_screen_tick1_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick1_main_main_default.set_img_recolor_opa(0)
style_screen_tick1_main_main_default.set_img_opa(255)

# add style for screen_tick1
screen_tick1.add_style(style_screen_tick1_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick2 = lv.img(screen)
screen_tick2.set_pos(int(245),int(475))
screen_tick2.set_size(9,20)
screen_tick2.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick2.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1587807866.png','rb') as f:
        screen_tick2_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1587807866.png')
    sys.exit()

screen_tick2_img = lv.img_dsc_t({
  'data_size': len(screen_tick2_img_data),
  'header': {'always_zero': 0, 'w': 9, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick2_img_data
})

screen_tick2.set_src(screen_tick2_img)
screen_tick2.set_pivot(0,0)
screen_tick2.set_angle(0)
# create style style_screen_tick2_main_main_default
style_screen_tick2_main_main_default = lv.style_t()
style_screen_tick2_main_main_default.init()
style_screen_tick2_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick2_main_main_default.set_img_recolor_opa(0)
style_screen_tick2_main_main_default.set_img_opa(255)

# add style for screen_tick2
screen_tick2.add_style(style_screen_tick2_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick3 = lv.img(screen)
screen_tick3.set_pos(int(236),int(474))
screen_tick3.set_size(10,21)
screen_tick3.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick3.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-983610234.png','rb') as f:
        screen_tick3_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-983610234.png')
    sys.exit()

screen_tick3_img = lv.img_dsc_t({
  'data_size': len(screen_tick3_img_data),
  'header': {'always_zero': 0, 'w': 10, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick3_img_data
})

screen_tick3.set_src(screen_tick3_img)
screen_tick3.set_pivot(0,0)
screen_tick3.set_angle(0)
# create style style_screen_tick3_main_main_default
style_screen_tick3_main_main_default = lv.style_t()
style_screen_tick3_main_main_default.init()
style_screen_tick3_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick3_main_main_default.set_img_recolor_opa(0)
style_screen_tick3_main_main_default.set_img_opa(255)

# add style for screen_tick3
screen_tick3.add_style(style_screen_tick3_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick4 = lv.img(screen)
screen_tick4.set_pos(int(226),int(473))
screen_tick4.set_size(11,21)
screen_tick4.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick4.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp389675848.png','rb') as f:
        screen_tick4_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp389675848.png')
    sys.exit()

screen_tick4_img = lv.img_dsc_t({
  'data_size': len(screen_tick4_img_data),
  'header': {'always_zero': 0, 'w': 11, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick4_img_data
})

screen_tick4.set_src(screen_tick4_img)
screen_tick4.set_pivot(0,0)
screen_tick4.set_angle(0)
# create style style_screen_tick4_main_main_default
style_screen_tick4_main_main_default = lv.style_t()
style_screen_tick4_main_main_default.init()
style_screen_tick4_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick4_main_main_default.set_img_recolor_opa(0)
style_screen_tick4_main_main_default.set_img_opa(255)

# add style for screen_tick4
screen_tick4.add_style(style_screen_tick4_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick5 = lv.img(screen)
screen_tick5.set_pos(int(217),int(471))
screen_tick5.set_size(12,21)
screen_tick5.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick5.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1762961930.png','rb') as f:
        screen_tick5_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1762961930.png')
    sys.exit()

screen_tick5_img = lv.img_dsc_t({
  'data_size': len(screen_tick5_img_data),
  'header': {'always_zero': 0, 'w': 12, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick5_img_data
})

screen_tick5.set_src(screen_tick5_img)
screen_tick5.set_pivot(0,0)
screen_tick5.set_angle(0)
# create style style_screen_tick5_main_main_default
style_screen_tick5_main_main_default = lv.style_t()
style_screen_tick5_main_main_default.init()
style_screen_tick5_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick5_main_main_default.set_img_recolor_opa(0)
style_screen_tick5_main_main_default.set_img_opa(255)

# add style for screen_tick5
screen_tick5.add_style(style_screen_tick5_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick6 = lv.img(screen)
screen_tick6.set_pos(int(207),int(469))
screen_tick6.set_size(13,21)
screen_tick6.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick6.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1158719284.png','rb') as f:
        screen_tick6_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1158719284.png')
    sys.exit()

screen_tick6_img = lv.img_dsc_t({
  'data_size': len(screen_tick6_img_data),
  'header': {'always_zero': 0, 'w': 13, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick6_img_data
})

screen_tick6.set_src(screen_tick6_img)
screen_tick6.set_pivot(0,0)
screen_tick6.set_angle(0)
# create style style_screen_tick6_main_main_default
style_screen_tick6_main_main_default = lv.style_t()
style_screen_tick6_main_main_default.init()
style_screen_tick6_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick6_main_main_default.set_img_recolor_opa(0)
style_screen_tick6_main_main_default.set_img_opa(255)

# add style for screen_tick6
screen_tick6.add_style(style_screen_tick6_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick7 = lv.img(screen)
screen_tick7.set_pos(int(198),int(466))
screen_tick7.set_size(14,21)
screen_tick7.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick7.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp214566798.png','rb') as f:
        screen_tick7_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp214566798.png')
    sys.exit()

screen_tick7_img = lv.img_dsc_t({
  'data_size': len(screen_tick7_img_data),
  'header': {'always_zero': 0, 'w': 14, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick7_img_data
})

screen_tick7.set_src(screen_tick7_img)
screen_tick7.set_pivot(0,0)
screen_tick7.set_angle(0)
# create style style_screen_tick7_main_main_default
style_screen_tick7_main_main_default = lv.style_t()
style_screen_tick7_main_main_default.init()
style_screen_tick7_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick7_main_main_default.set_img_recolor_opa(0)
style_screen_tick7_main_main_default.set_img_opa(255)

# add style for screen_tick7
screen_tick7.add_style(style_screen_tick7_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick8 = lv.img(screen)
screen_tick8.set_pos(int(189),int(463))
screen_tick8.set_size(15,21)
screen_tick8.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick8.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1587852880.png','rb') as f:
        screen_tick8_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1587852880.png')
    sys.exit()

screen_tick8_img = lv.img_dsc_t({
  'data_size': len(screen_tick8_img_data),
  'header': {'always_zero': 0, 'w': 15, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick8_img_data
})

screen_tick8.set_src(screen_tick8_img)
screen_tick8.set_pivot(0,0)
screen_tick8.set_angle(0)
# create style style_screen_tick8_main_main_default
style_screen_tick8_main_main_default = lv.style_t()
style_screen_tick8_main_main_default.init()
style_screen_tick8_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick8_main_main_default.set_img_recolor_opa(0)
style_screen_tick8_main_main_default.set_img_opa(255)

# add style for screen_tick8
screen_tick8.add_style(style_screen_tick8_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick9 = lv.img(screen)
screen_tick9.set_pos(int(180),int(460))
screen_tick9.set_size(16,21)
screen_tick9.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick9.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1333828334.png','rb') as f:
        screen_tick9_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1333828334.png')
    sys.exit()

screen_tick9_img = lv.img_dsc_t({
  'data_size': len(screen_tick9_img_data),
  'header': {'always_zero': 0, 'w': 16, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick9_img_data
})

screen_tick9.set_src(screen_tick9_img)
screen_tick9.set_pivot(0,0)
screen_tick9.set_angle(0)
# create style style_screen_tick9_main_main_default
style_screen_tick9_main_main_default = lv.style_t()
style_screen_tick9_main_main_default.init()
style_screen_tick9_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick9_main_main_default.set_img_recolor_opa(0)
style_screen_tick9_main_main_default.set_img_opa(255)

# add style for screen_tick9
screen_tick9.add_style(style_screen_tick9_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick10 = lv.img(screen)
screen_tick10.set_pos(int(172),int(456))
screen_tick10.set_size(16,21)
screen_tick10.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick10.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-628121330.png','rb') as f:
        screen_tick10_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-628121330.png')
    sys.exit()

screen_tick10_img = lv.img_dsc_t({
  'data_size': len(screen_tick10_img_data),
  'header': {'always_zero': 0, 'w': 16, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick10_img_data
})

screen_tick10.set_src(screen_tick10_img)
screen_tick10.set_pivot(0,0)
screen_tick10.set_angle(0)
# create style style_screen_tick10_main_main_default
style_screen_tick10_main_main_default = lv.style_t()
style_screen_tick10_main_main_default.init()
style_screen_tick10_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick10_main_main_default.set_img_recolor_opa(0)
style_screen_tick10_main_main_default.set_img_opa(255)

# add style for screen_tick10
screen_tick10.add_style(style_screen_tick10_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick11 = lv.img(screen)
screen_tick11.set_pos(int(163),int(452))
screen_tick11.set_size(17,20)
screen_tick11.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick11.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-608144945.png','rb') as f:
        screen_tick11_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-608144945.png')
    sys.exit()

screen_tick11_img = lv.img_dsc_t({
  'data_size': len(screen_tick11_img_data),
  'header': {'always_zero': 0, 'w': 17, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick11_img_data
})

screen_tick11.set_src(screen_tick11_img)
screen_tick11.set_pivot(0,0)
screen_tick11.set_angle(0)
# create style style_screen_tick11_main_main_default
style_screen_tick11_main_main_default = lv.style_t()
style_screen_tick11_main_main_default.init()
style_screen_tick11_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick11_main_main_default.set_img_recolor_opa(0)
style_screen_tick11_main_main_default.set_img_opa(255)

# add style for screen_tick11
screen_tick11.add_style(style_screen_tick11_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick12 = lv.img(screen)
screen_tick12.set_pos(int(155),int(447))
screen_tick12.set_size(17,21)
screen_tick12.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick12.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1332044591.png','rb') as f:
        screen_tick12_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1332044591.png')
    sys.exit()

screen_tick12_img = lv.img_dsc_t({
  'data_size': len(screen_tick12_img_data),
  'header': {'always_zero': 0, 'w': 17, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick12_img_data
})

screen_tick12.set_src(screen_tick12_img)
screen_tick12.set_pivot(0,0)
screen_tick12.set_angle(0)
# create style style_screen_tick12_main_main_default
style_screen_tick12_main_main_default = lv.style_t()
style_screen_tick12_main_main_default.init()
style_screen_tick12_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick12_main_main_default.set_img_recolor_opa(0)
style_screen_tick12_main_main_default.set_img_opa(255)

# add style for screen_tick12
screen_tick12.add_style(style_screen_tick12_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick13 = lv.img(screen)
screen_tick13.set_pos(int(147),int(442))
screen_tick13.set_size(18,20)
screen_tick13.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick13.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1312068206.png','rb') as f:
        screen_tick13_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1312068206.png')
    sys.exit()

screen_tick13_img = lv.img_dsc_t({
  'data_size': len(screen_tick13_img_data),
  'header': {'always_zero': 0, 'w': 18, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick13_img_data
})

screen_tick13.set_src(screen_tick13_img)
screen_tick13.set_pivot(0,0)
screen_tick13.set_angle(0)
# create style style_screen_tick13_main_main_default
style_screen_tick13_main_main_default = lv.style_t()
style_screen_tick13_main_main_default.init()
style_screen_tick13_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick13_main_main_default.set_img_recolor_opa(0)
style_screen_tick13_main_main_default.set_img_opa(255)

# add style for screen_tick13
screen_tick13.add_style(style_screen_tick13_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick14 = lv.img(screen)
screen_tick14.set_pos(int(140),int(436))
screen_tick14.set_size(18,20)
screen_tick14.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick14.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp905689747.png','rb') as f:
        screen_tick14_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp905689747.png')
    sys.exit()

screen_tick14_img = lv.img_dsc_t({
  'data_size': len(screen_tick14_img_data),
  'header': {'always_zero': 0, 'w': 18, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick14_img_data
})

screen_tick14.set_src(screen_tick14_img)
screen_tick14.set_pivot(0,0)
screen_tick14.set_angle(0)
# create style style_screen_tick14_main_main_default
style_screen_tick14_main_main_default = lv.style_t()
style_screen_tick14_main_main_default.init()
style_screen_tick14_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick14_main_main_default.set_img_recolor_opa(0)
style_screen_tick14_main_main_default.set_img_opa(255)

# add style for screen_tick14
screen_tick14.add_style(style_screen_tick14_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick15 = lv.img(screen)
screen_tick15.set_pos(int(133),int(431))
screen_tick15.set_size(19,19)
screen_tick15.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick15.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1724033729.png','rb') as f:
        screen_tick15_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1724033729.png')
    sys.exit()

screen_tick15_img = lv.img_dsc_t({
  'data_size': len(screen_tick15_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick15_img_data
})

screen_tick15.set_src(screen_tick15_img)
screen_tick15.set_pivot(0,0)
screen_tick15.set_angle(0)
# create style style_screen_tick15_main_main_default
style_screen_tick15_main_main_default = lv.style_t()
style_screen_tick15_main_main_default.init()
style_screen_tick15_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick15_main_main_default.set_img_recolor_opa(0)
style_screen_tick15_main_main_default.set_img_opa(255)

# add style for screen_tick15
screen_tick15.add_style(style_screen_tick15_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick16 = lv.img(screen)
screen_tick16.set_pos(int(126),int(425))
screen_tick16.set_size(19,19)
screen_tick16.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick16.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp493724224.png','rb') as f:
        screen_tick16_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp493724224.png')
    sys.exit()

screen_tick16_img = lv.img_dsc_t({
  'data_size': len(screen_tick16_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick16_img_data
})

screen_tick16.set_src(screen_tick16_img)
screen_tick16.set_pivot(0,0)
screen_tick16.set_angle(0)
# create style style_screen_tick16_main_main_default
style_screen_tick16_main_main_default = lv.style_t()
style_screen_tick16_main_main_default.init()
style_screen_tick16_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick16_main_main_default.set_img_recolor_opa(0)
style_screen_tick16_main_main_default.set_img_opa(255)

# add style for screen_tick16
screen_tick16.add_style(style_screen_tick16_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick17 = lv.img(screen)
screen_tick17.set_pos(int(119),int(418))
screen_tick17.set_size(20,19)
screen_tick17.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick17.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1312970199.png','rb') as f:
        screen_tick17_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1312970199.png')
    sys.exit()

screen_tick17_img = lv.img_dsc_t({
  'data_size': len(screen_tick17_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick17_img_data
})

screen_tick17.set_src(screen_tick17_img)
screen_tick17.set_pivot(0,0)
screen_tick17.set_angle(0)
# create style style_screen_tick17_main_main_default
style_screen_tick17_main_main_default = lv.style_t()
style_screen_tick17_main_main_default.init()
style_screen_tick17_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick17_main_main_default.set_img_recolor_opa(0)
style_screen_tick17_main_main_default.set_img_opa(255)

# add style for screen_tick17
screen_tick17.add_style(style_screen_tick17_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick18 = lv.img(screen)
screen_tick18.set_pos(int(113),int(411))
screen_tick18.set_size(20,19)
screen_tick18.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick18.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-764239144.png','rb') as f:
        screen_tick18_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-764239144.png')
    sys.exit()

screen_tick18_img = lv.img_dsc_t({
  'data_size': len(screen_tick18_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick18_img_data
})

screen_tick18.set_src(screen_tick18_img)
screen_tick18.set_pivot(0,0)
screen_tick18.set_angle(0)
# create style style_screen_tick18_main_main_default
style_screen_tick18_main_main_default = lv.style_t()
style_screen_tick18_main_main_default.init()
style_screen_tick18_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick18_main_main_default.set_img_recolor_opa(0)
style_screen_tick18_main_main_default.set_img_opa(255)

# add style for screen_tick18
screen_tick18.add_style(style_screen_tick18_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick19 = lv.img(screen)
screen_tick19.set_pos(int(107),int(405))
screen_tick19.set_size(21,17)
screen_tick19.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick19.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-2097572456.png','rb') as f:
        screen_tick19_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-2097572456.png')
    sys.exit()

screen_tick19_img = lv.img_dsc_t({
  'data_size': len(screen_tick19_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 17, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick19_img_data
})

screen_tick19.set_src(screen_tick19_img)
screen_tick19.set_pivot(0,0)
screen_tick19.set_angle(0)
# create style style_screen_tick19_main_main_default
style_screen_tick19_main_main_default = lv.style_t()
style_screen_tick19_main_main_default.init()
style_screen_tick19_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick19_main_main_default.set_img_recolor_opa(0)
style_screen_tick19_main_main_default.set_img_opa(255)

# add style for screen_tick19
screen_tick19.add_style(style_screen_tick19_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick20 = lv.img(screen)
screen_tick20.set_pos(int(102),int(397))
screen_tick20.set_size(21,17)
screen_tick20.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick20.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-551537746.png','rb') as f:
        screen_tick20_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-551537746.png')
    sys.exit()

screen_tick20_img = lv.img_dsc_t({
  'data_size': len(screen_tick20_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 17, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick20_img_data
})

screen_tick20.set_src(screen_tick20_img)
screen_tick20.set_pivot(0,0)
screen_tick20.set_angle(0)
# create style style_screen_tick20_main_main_default
style_screen_tick20_main_main_default = lv.style_t()
style_screen_tick20_main_main_default.init()
style_screen_tick20_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick20_main_main_default.set_img_recolor_opa(0)
style_screen_tick20_main_main_default.set_img_opa(255)

# add style for screen_tick20
screen_tick20.add_style(style_screen_tick20_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick21 = lv.img(screen)
screen_tick21.set_pos(int(97),int(390))
screen_tick21.set_size(21,16)
screen_tick21.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick21.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp312910510.png','rb') as f:
        screen_tick21_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp312910510.png')
    sys.exit()

screen_tick21_img = lv.img_dsc_t({
  'data_size': len(screen_tick21_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 16, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick21_img_data
})

screen_tick21.set_src(screen_tick21_img)
screen_tick21.set_pivot(0,0)
screen_tick21.set_angle(0)
# create style style_screen_tick21_main_main_default
style_screen_tick21_main_main_default = lv.style_t()
style_screen_tick21_main_main_default.init()
style_screen_tick21_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick21_main_main_default.set_img_recolor_opa(0)
style_screen_tick21_main_main_default.set_img_opa(255)

# add style for screen_tick21
screen_tick21.add_style(style_screen_tick21_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick22 = lv.img(screen)
screen_tick22.set_pos(int(93),int(382))
screen_tick22.set_size(21,16)
screen_tick22.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick22.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1764298833.png','rb') as f:
        screen_tick22_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1764298833.png')
    sys.exit()

screen_tick22_img = lv.img_dsc_t({
  'data_size': len(screen_tick22_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 16, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick22_img_data
})

screen_tick22.set_src(screen_tick22_img)
screen_tick22.set_pivot(0,0)
screen_tick22.set_angle(0)
# create style style_screen_tick22_main_main_default
style_screen_tick22_main_main_default = lv.style_t()
style_screen_tick22_main_main_default.init()
style_screen_tick22_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick22_main_main_default.set_img_recolor_opa(0)
style_screen_tick22_main_main_default.set_img_opa(255)

# add style for screen_tick22
screen_tick22.add_style(style_screen_tick22_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick23 = lv.img(screen)
screen_tick23.set_pos(int(89),int(374))
screen_tick23.set_size(21,15)
screen_tick23.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick23.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-899850577.png','rb') as f:
        screen_tick23_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-899850577.png')
    sys.exit()

screen_tick23_img = lv.img_dsc_t({
  'data_size': len(screen_tick23_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 15, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick23_img_data
})

screen_tick23.set_src(screen_tick23_img)
screen_tick23.set_pivot(0,0)
screen_tick23.set_angle(0)
# create style style_screen_tick23_main_main_default
style_screen_tick23_main_main_default = lv.style_t()
style_screen_tick23_main_main_default.init()
style_screen_tick23_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick23_main_main_default.set_img_recolor_opa(0)
style_screen_tick23_main_main_default.set_img_opa(255)

# add style for screen_tick23
screen_tick23.add_style(style_screen_tick23_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick24 = lv.img(screen)
screen_tick24.set_pos(int(85),int(366))
screen_tick24.set_size(21,14)
screen_tick24.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick24.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-35402321.png','rb') as f:
        screen_tick24_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-35402321.png')
    sys.exit()

screen_tick24_img = lv.img_dsc_t({
  'data_size': len(screen_tick24_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 14, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick24_img_data
})

screen_tick24.set_src(screen_tick24_img)
screen_tick24.set_pivot(0,0)
screen_tick24.set_angle(0)
# create style style_screen_tick24_main_main_default
style_screen_tick24_main_main_default = lv.style_t()
style_screen_tick24_main_main_default.init()
style_screen_tick24_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick24_main_main_default.set_img_recolor_opa(0)
style_screen_tick24_main_main_default.set_img_opa(255)

# add style for screen_tick24
screen_tick24.add_style(style_screen_tick24_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick25 = lv.img(screen)
screen_tick25.set_pos(int(82),int(358))
screen_tick25.set_size(21,13)
screen_tick25.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick25.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp829045935.png','rb') as f:
        screen_tick25_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp829045935.png')
    sys.exit()

screen_tick25_img = lv.img_dsc_t({
  'data_size': len(screen_tick25_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 13, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick25_img_data
})

screen_tick25.set_src(screen_tick25_img)
screen_tick25.set_pivot(0,0)
screen_tick25.set_angle(0)
# create style style_screen_tick25_main_main_default
style_screen_tick25_main_main_default = lv.style_t()
style_screen_tick25_main_main_default.init()
style_screen_tick25_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick25_main_main_default.set_img_recolor_opa(0)
style_screen_tick25_main_main_default.set_img_opa(255)

# add style for screen_tick25
screen_tick25.add_style(style_screen_tick25_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick26 = lv.img(screen)
screen_tick26.set_pos(int(80),int(350))
screen_tick26.set_size(21,12)
screen_tick26.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick26.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1693494191.png','rb') as f:
        screen_tick26_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1693494191.png')
    sys.exit()

screen_tick26_img = lv.img_dsc_t({
  'data_size': len(screen_tick26_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 12, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick26_img_data
})

screen_tick26.set_src(screen_tick26_img)
screen_tick26.set_pivot(0,0)
screen_tick26.set_angle(0)
# create style style_screen_tick26_main_main_default
style_screen_tick26_main_main_default = lv.style_t()
style_screen_tick26_main_main_default.init()
style_screen_tick26_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick26_main_main_default.set_img_recolor_opa(0)
style_screen_tick26_main_main_default.set_img_opa(255)

# add style for screen_tick26
screen_tick26.add_style(style_screen_tick26_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick27 = lv.img(screen)
screen_tick27.set_pos(int(78),int(342))
screen_tick27.set_size(21,12)
screen_tick27.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick27.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-383715152.png','rb') as f:
        screen_tick27_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-383715152.png')
    sys.exit()

screen_tick27_img = lv.img_dsc_t({
  'data_size': len(screen_tick27_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 12, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick27_img_data
})

screen_tick27.set_src(screen_tick27_img)
screen_tick27.set_pivot(0,0)
screen_tick27.set_angle(0)
# create style style_screen_tick27_main_main_default
style_screen_tick27_main_main_default = lv.style_t()
style_screen_tick27_main_main_default.init()
style_screen_tick27_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick27_main_main_default.set_img_recolor_opa(0)
style_screen_tick27_main_main_default.set_img_opa(255)

# add style for screen_tick27
screen_tick27.add_style(style_screen_tick27_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick28 = lv.img(screen)
screen_tick28.set_pos(int(76),int(334))
screen_tick28.set_size(21,10)
screen_tick28.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick28.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-872576593.png','rb') as f:
        screen_tick28_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-872576593.png')
    sys.exit()

screen_tick28_img = lv.img_dsc_t({
  'data_size': len(screen_tick28_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 10, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick28_img_data
})

screen_tick28.set_src(screen_tick28_img)
screen_tick28.set_pivot(0,0)
screen_tick28.set_angle(0)
# create style style_screen_tick28_main_main_default
style_screen_tick28_main_main_default = lv.style_t()
style_screen_tick28_main_main_default.init()
style_screen_tick28_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick28_main_main_default.set_img_recolor_opa(0)
style_screen_tick28_main_main_default.set_img_opa(255)

# add style for screen_tick28
screen_tick28.add_style(style_screen_tick28_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick29 = lv.img(screen)
screen_tick29.set_pos(int(75),int(325))
screen_tick29.set_size(21,10)
screen_tick29.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick29.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1345181360.png','rb') as f:
        screen_tick29_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1345181360.png')
    sys.exit()

screen_tick29_img = lv.img_dsc_t({
  'data_size': len(screen_tick29_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 10, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick29_img_data
})

screen_tick29.set_src(screen_tick29_img)
screen_tick29.set_pivot(0,0)
screen_tick29.set_angle(0)
# create style style_screen_tick29_main_main_default
style_screen_tick29_main_main_default = lv.style_t()
style_screen_tick29_main_main_default.init()
style_screen_tick29_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick29_main_main_default.set_img_recolor_opa(0)
style_screen_tick29_main_main_default.set_img_opa(255)

# add style for screen_tick29
screen_tick29.add_style(style_screen_tick29_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick30 = lv.img(screen)
screen_tick30.set_pos(int(75),int(316))
screen_tick30.set_size(20,9)
screen_tick30.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick30.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1970682525.png','rb') as f:
        screen_tick30_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1970682525.png')
    sys.exit()

screen_tick30_img = lv.img_dsc_t({
  'data_size': len(screen_tick30_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 9, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick30_img_data
})

screen_tick30.set_src(screen_tick30_img)
screen_tick30.set_pivot(0,0)
screen_tick30.set_angle(0)
# create style style_screen_tick30_main_main_default
style_screen_tick30_main_main_default = lv.style_t()
style_screen_tick30_main_main_default.init()
style_screen_tick30_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick30_main_main_default.set_img_recolor_opa(0)
style_screen_tick30_main_main_default.set_img_opa(255)

# add style for screen_tick30
screen_tick30.add_style(style_screen_tick30_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick31 = lv.img(screen)
screen_tick31.set_pos(int(75),int(307))
screen_tick31.set_size(19,9)
screen_tick31.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick31.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1930536238.png','rb') as f:
        screen_tick31_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1930536238.png')
    sys.exit()

screen_tick31_img = lv.img_dsc_t({
  'data_size': len(screen_tick31_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 9, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick31_img_data
})

screen_tick31.set_src(screen_tick31_img)
screen_tick31.set_pivot(0,0)
screen_tick31.set_angle(0)
# create style style_screen_tick31_main_main_default
style_screen_tick31_main_main_default = lv.style_t()
style_screen_tick31_main_main_default.init()
style_screen_tick31_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick31_main_main_default.set_img_recolor_opa(0)
style_screen_tick31_main_main_default.set_img_opa(255)

# add style for screen_tick31
screen_tick31.add_style(style_screen_tick31_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick32 = lv.img(screen)
screen_tick32.set_pos(int(75),int(297))
screen_tick32.set_size(20,9)
screen_tick32.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick32.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1836669019.png','rb') as f:
        screen_tick32_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1836669019.png')
    sys.exit()

screen_tick32_img = lv.img_dsc_t({
  'data_size': len(screen_tick32_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 9, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick32_img_data
})

screen_tick32.set_src(screen_tick32_img)
screen_tick32.set_pivot(0,0)
screen_tick32.set_angle(0)
# create style style_screen_tick32_main_main_default
style_screen_tick32_main_main_default = lv.style_t()
style_screen_tick32_main_main_default.init()
style_screen_tick32_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick32_main_main_default.set_img_recolor_opa(0)
style_screen_tick32_main_main_default.set_img_opa(255)

# add style for screen_tick32
screen_tick32.add_style(style_screen_tick32_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick33 = lv.img(screen)
screen_tick33.set_pos(int(75),int(288))
screen_tick33.set_size(21,10)
screen_tick33.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick33.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp954555337.png','rb') as f:
        screen_tick33_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp954555337.png')
    sys.exit()

screen_tick33_img = lv.img_dsc_t({
  'data_size': len(screen_tick33_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 10, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick33_img_data
})

screen_tick33.set_src(screen_tick33_img)
screen_tick33.set_pivot(0,0)
screen_tick33.set_angle(0)
# create style style_screen_tick33_main_main_default
style_screen_tick33_main_main_default = lv.style_t()
style_screen_tick33_main_main_default.init()
style_screen_tick33_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick33_main_main_default.set_img_recolor_opa(0)
style_screen_tick33_main_main_default.set_img_opa(255)

# add style for screen_tick33
screen_tick33.add_style(style_screen_tick33_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick34 = lv.img(screen)
screen_tick34.set_pos(int(76),int(278))
screen_tick34.set_size(21,11)
screen_tick34.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick34.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp230655691.png','rb') as f:
        screen_tick34_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp230655691.png')
    sys.exit()

screen_tick34_img = lv.img_dsc_t({
  'data_size': len(screen_tick34_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 11, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick34_img_data
})

screen_tick34.set_src(screen_tick34_img)
screen_tick34.set_pivot(0,0)
screen_tick34.set_angle(0)
# create style style_screen_tick34_main_main_default
style_screen_tick34_main_main_default = lv.style_t()
style_screen_tick34_main_main_default.init()
style_screen_tick34_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick34_main_main_default.set_img_recolor_opa(0)
style_screen_tick34_main_main_default.set_img_opa(255)

# add style for screen_tick34
screen_tick34.add_style(style_screen_tick34_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick35 = lv.img(screen)
screen_tick35.set_pos(int(78),int(269))
screen_tick35.set_size(21,12)
screen_tick35.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick35.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-493243955.png','rb') as f:
        screen_tick35_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-493243955.png')
    sys.exit()

screen_tick35_img = lv.img_dsc_t({
  'data_size': len(screen_tick35_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 12, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick35_img_data
})

screen_tick35.set_src(screen_tick35_img)
screen_tick35.set_pivot(0,0)
screen_tick35.set_angle(0)
# create style style_screen_tick35_main_main_default
style_screen_tick35_main_main_default = lv.style_t()
style_screen_tick35_main_main_default.init()
style_screen_tick35_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick35_main_main_default.set_img_recolor_opa(0)
style_screen_tick35_main_main_default.set_img_opa(255)

# add style for screen_tick35
screen_tick35.add_style(style_screen_tick35_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick36 = lv.img(screen)
screen_tick36.set_pos(int(80),int(259))
screen_tick36.set_size(21,13)
screen_tick36.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick36.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1217143601.png','rb') as f:
        screen_tick36_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1217143601.png')
    sys.exit()

screen_tick36_img = lv.img_dsc_t({
  'data_size': len(screen_tick36_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 13, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick36_img_data
})

screen_tick36.set_src(screen_tick36_img)
screen_tick36.set_pivot(0,0)
screen_tick36.set_angle(0)
# create style style_screen_tick36_main_main_default
style_screen_tick36_main_main_default = lv.style_t()
style_screen_tick36_main_main_default.init()
style_screen_tick36_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick36_main_main_default.set_img_recolor_opa(0)
style_screen_tick36_main_main_default.set_img_opa(255)

# add style for screen_tick36
screen_tick36.add_style(style_screen_tick36_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick37 = lv.img(screen)
screen_tick37.set_pos(int(82),int(250))
screen_tick37.set_size(21,14)
screen_tick37.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick37.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1941043247.png','rb') as f:
        screen_tick37_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1941043247.png')
    sys.exit()

screen_tick37_img = lv.img_dsc_t({
  'data_size': len(screen_tick37_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 14, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick37_img_data
})

screen_tick37.set_src(screen_tick37_img)
screen_tick37.set_pivot(0,0)
screen_tick37.set_angle(0)
# create style style_screen_tick37_main_main_default
style_screen_tick37_main_main_default = lv.style_t()
style_screen_tick37_main_main_default.init()
style_screen_tick37_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick37_main_main_default.set_img_recolor_opa(0)
style_screen_tick37_main_main_default.set_img_opa(255)

# add style for screen_tick37
screen_tick37.add_style(style_screen_tick37_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick38 = lv.img(screen)
screen_tick38.set_pos(int(85),int(241))
screen_tick38.set_size(21,15)
screen_tick38.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick38.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1630024403.png','rb') as f:
        screen_tick38_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1630024403.png')
    sys.exit()

screen_tick38_img = lv.img_dsc_t({
  'data_size': len(screen_tick38_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 15, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick38_img_data
})

screen_tick38.set_src(screen_tick38_img)
screen_tick38.set_pivot(0,0)
screen_tick38.set_angle(0)
# create style style_screen_tick38_main_main_default
style_screen_tick38_main_main_default = lv.style_t()
style_screen_tick38_main_main_default.init()
style_screen_tick38_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick38_main_main_default.set_img_recolor_opa(0)
style_screen_tick38_main_main_default.set_img_opa(255)

# add style for screen_tick38
screen_tick38.add_style(style_screen_tick38_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick39 = lv.img(screen)
screen_tick39.set_pos(int(89),int(232))
screen_tick39.set_size(21,16)
screen_tick39.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick39.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp906124757.png','rb') as f:
        screen_tick39_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp906124757.png')
    sys.exit()

screen_tick39_img = lv.img_dsc_t({
  'data_size': len(screen_tick39_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 16, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick39_img_data
})

screen_tick39.set_src(screen_tick39_img)
screen_tick39.set_pivot(0,0)
screen_tick39.set_angle(0)
# create style style_screen_tick39_main_main_default
style_screen_tick39_main_main_default = lv.style_t()
style_screen_tick39_main_main_default.init()
style_screen_tick39_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick39_main_main_default.set_img_recolor_opa(0)
style_screen_tick39_main_main_default.set_img_opa(255)

# add style for screen_tick39
screen_tick39.add_style(style_screen_tick39_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick40 = lv.img(screen)
screen_tick40.set_pos(int(93),int(224))
screen_tick40.set_size(21,16)
screen_tick40.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick40.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1842807829.png','rb') as f:
        screen_tick40_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1842807829.png')
    sys.exit()

screen_tick40_img = lv.img_dsc_t({
  'data_size': len(screen_tick40_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 16, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick40_img_data
})

screen_tick40.set_src(screen_tick40_img)
screen_tick40.set_pivot(0,0)
screen_tick40.set_angle(0)
# create style style_screen_tick40_main_main_default
style_screen_tick40_main_main_default = lv.style_t()
style_screen_tick40_main_main_default.init()
style_screen_tick40_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick40_main_main_default.set_img_recolor_opa(0)
style_screen_tick40_main_main_default.set_img_opa(255)

# add style for screen_tick40
screen_tick40.add_style(style_screen_tick40_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick41 = lv.img(screen)
screen_tick41.set_pos(int(97),int(215))
screen_tick41.set_size(21,17)
screen_tick41.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick41.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1728259821.png','rb') as f:
        screen_tick41_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1728259821.png')
    sys.exit()

screen_tick41_img = lv.img_dsc_t({
  'data_size': len(screen_tick41_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 17, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick41_img_data
})

screen_tick41.set_src(screen_tick41_img)
screen_tick41.set_pivot(0,0)
screen_tick41.set_angle(0)
# create style style_screen_tick41_main_main_default
style_screen_tick41_main_main_default = lv.style_t()
style_screen_tick41_main_main_default.init()
style_screen_tick41_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick41_main_main_default.set_img_recolor_opa(0)
style_screen_tick41_main_main_default.set_img_opa(255)

# add style for screen_tick41
screen_tick41.add_style(style_screen_tick41_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick42 = lv.img(screen)
screen_tick42.set_pos(int(102),int(207))
screen_tick42.set_size(21,17)
screen_tick42.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick42.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-348949522.png','rb') as f:
        screen_tick42_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-348949522.png')
    sys.exit()

screen_tick42_img = lv.img_dsc_t({
  'data_size': len(screen_tick42_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 17, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick42_img_data
})

screen_tick42.set_src(screen_tick42_img)
screen_tick42.set_pivot(0,0)
screen_tick42.set_angle(0)
# create style style_screen_tick42_main_main_default
style_screen_tick42_main_main_default = lv.style_t()
style_screen_tick42_main_main_default.init()
style_screen_tick42_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick42_main_main_default.set_img_recolor_opa(0)
style_screen_tick42_main_main_default.set_img_opa(255)

# add style for screen_tick42
screen_tick42.add_style(style_screen_tick42_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick43 = lv.img(screen)
screen_tick43.set_pos(int(107),int(199))
screen_tick43.set_size(21,18)
screen_tick43.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick43.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1072849168.png','rb') as f:
        screen_tick43_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1072849168.png')
    sys.exit()

screen_tick43_img = lv.img_dsc_t({
  'data_size': len(screen_tick43_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 18, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick43_img_data
})

screen_tick43.set_src(screen_tick43_img)
screen_tick43.set_pivot(0,0)
screen_tick43.set_angle(0)
# create style style_screen_tick43_main_main_default
style_screen_tick43_main_main_default = lv.style_t()
style_screen_tick43_main_main_default.init()
style_screen_tick43_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick43_main_main_default.set_img_recolor_opa(0)
style_screen_tick43_main_main_default.set_img_opa(255)

# add style for screen_tick43
screen_tick43.add_style(style_screen_tick43_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick44 = lv.img(screen)
screen_tick44.set_pos(int(113),int(192))
screen_tick44.set_size(20,18)
screen_tick44.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick44.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1989380656.png','rb') as f:
        screen_tick44_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1989380656.png')
    sys.exit()

screen_tick44_img = lv.img_dsc_t({
  'data_size': len(screen_tick44_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 18, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick44_img_data
})

screen_tick44.set_src(screen_tick44_img)
screen_tick44.set_pivot(0,0)
screen_tick44.set_angle(0)
# create style style_screen_tick44_main_main_default
style_screen_tick44_main_main_default = lv.style_t()
style_screen_tick44_main_main_default.init()
style_screen_tick44_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick44_main_main_default.set_img_recolor_opa(0)
style_screen_tick44_main_main_default.set_img_opa(255)

# add style for screen_tick44
screen_tick44.add_style(style_screen_tick44_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick45 = lv.img(screen)
screen_tick45.set_pos(int(119),int(185))
screen_tick45.set_size(20,19)
screen_tick45.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick45.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1265481010.png','rb') as f:
        screen_tick45_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1265481010.png')
    sys.exit()

screen_tick45_img = lv.img_dsc_t({
  'data_size': len(screen_tick45_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick45_img_data
})

screen_tick45.set_src(screen_tick45_img)
screen_tick45.set_pivot(0,0)
screen_tick45.set_angle(0)
# create style style_screen_tick45_main_main_default
style_screen_tick45_main_main_default = lv.style_t()
style_screen_tick45_main_main_default.init()
style_screen_tick45_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick45_main_main_default.set_img_recolor_opa(0)
style_screen_tick45_main_main_default.set_img_opa(255)

# add style for screen_tick45
screen_tick45.add_style(style_screen_tick45_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick46 = lv.img(screen)
screen_tick46.set_pos(int(126),int(178))
screen_tick46.set_size(19,19)
screen_tick46.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick46.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp586783645.png','rb') as f:
        screen_tick46_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp586783645.png')
    sys.exit()

screen_tick46_img = lv.img_dsc_t({
  'data_size': len(screen_tick46_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick46_img_data
})

screen_tick46.set_src(screen_tick46_img)
screen_tick46.set_pivot(0,0)
screen_tick46.set_angle(0)
# create style style_screen_tick46_main_main_default
style_screen_tick46_main_main_default = lv.style_t()
style_screen_tick46_main_main_default.init()
style_screen_tick46_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick46_main_main_default.set_img_recolor_opa(0)
style_screen_tick46_main_main_default.set_img_opa(255)

# add style for screen_tick46
screen_tick46.add_style(style_screen_tick46_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick47 = lv.img(screen)
screen_tick47.set_pos(int(133),int(171))
screen_tick47.set_size(19,20)
screen_tick47.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick47.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1782383436.png','rb') as f:
        screen_tick47_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1782383436.png')
    sys.exit()

screen_tick47_img = lv.img_dsc_t({
  'data_size': len(screen_tick47_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick47_img_data
})

screen_tick47.set_src(screen_tick47_img)
screen_tick47.set_pivot(0,0)
screen_tick47.set_angle(0)
# create style style_screen_tick47_main_main_default
style_screen_tick47_main_main_default = lv.style_t()
style_screen_tick47_main_main_default.init()
style_screen_tick47_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick47_main_main_default.set_img_recolor_opa(0)
style_screen_tick47_main_main_default.set_img_opa(255)

# add style for screen_tick47
screen_tick47.add_style(style_screen_tick47_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick48 = lv.img(screen)
screen_tick48.set_pos(int(140),int(165))
screen_tick48.set_size(18,20)
screen_tick48.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick48.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1279846388.png','rb') as f:
        screen_tick48_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1279846388.png')
    sys.exit()

screen_tick48_img = lv.img_dsc_t({
  'data_size': len(screen_tick48_img_data),
  'header': {'always_zero': 0, 'w': 18, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick48_img_data
})

screen_tick48.set_src(screen_tick48_img)
screen_tick48.set_pivot(0,0)
screen_tick48.set_angle(0)
# create style style_screen_tick48_main_main_default
style_screen_tick48_main_main_default = lv.style_t()
style_screen_tick48_main_main_default.init()
style_screen_tick48_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick48_main_main_default.set_img_recolor_opa(0)
style_screen_tick48_main_main_default.set_img_opa(255)

# add style for screen_tick48
screen_tick48.add_style(style_screen_tick48_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick49 = lv.img(screen)
screen_tick49.set_pos(int(147),int(159))
screen_tick49.set_size(18,21)
screen_tick49.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick49.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp555946742.png','rb') as f:
        screen_tick49_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp555946742.png')
    sys.exit()

screen_tick49_img = lv.img_dsc_t({
  'data_size': len(screen_tick49_img_data),
  'header': {'always_zero': 0, 'w': 18, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick49_img_data
})

screen_tick49.set_src(screen_tick49_img)
screen_tick49.set_pivot(0,0)
screen_tick49.set_angle(0)
# create style style_screen_tick49_main_main_default
style_screen_tick49_main_main_default = lv.style_t()
style_screen_tick49_main_main_default.init()
style_screen_tick49_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick49_main_main_default.set_img_recolor_opa(0)
style_screen_tick49_main_main_default.set_img_opa(255)

# add style for screen_tick49
screen_tick49.add_style(style_screen_tick49_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick50 = lv.img(screen)
screen_tick50.set_pos(int(155),int(154))
screen_tick50.set_size(17,21)
screen_tick50.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick50.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1348513973.png','rb') as f:
        screen_tick50_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1348513973.png')
    sys.exit()

screen_tick50_img = lv.img_dsc_t({
  'data_size': len(screen_tick50_img_data),
  'header': {'always_zero': 0, 'w': 17, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick50_img_data
})

screen_tick50.set_src(screen_tick50_img)
screen_tick50.set_pivot(0,0)
screen_tick50.set_angle(0)
# create style style_screen_tick50_main_main_default
style_screen_tick50_main_main_default = lv.style_t()
style_screen_tick50_main_main_default.init()
style_screen_tick50_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick50_main_main_default.set_img_recolor_opa(0)
style_screen_tick50_main_main_default.set_img_opa(255)

# add style for screen_tick50
screen_tick50.add_style(style_screen_tick50_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick51 = lv.img(screen)
screen_tick51.set_pos(int(163),int(149))
screen_tick51.set_size(17,21)
screen_tick51.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick51.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp869243980.png','rb') as f:
        screen_tick51_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp869243980.png')
    sys.exit()

screen_tick51_img = lv.img_dsc_t({
  'data_size': len(screen_tick51_img_data),
  'header': {'always_zero': 0, 'w': 17, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick51_img_data
})

screen_tick51.set_src(screen_tick51_img)
screen_tick51.set_pivot(0,0)
screen_tick51.set_angle(0)
# create style style_screen_tick51_main_main_default
style_screen_tick51_main_main_default = lv.style_t()
style_screen_tick51_main_main_default.init()
style_screen_tick51_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick51_main_main_default.set_img_recolor_opa(0)
style_screen_tick51_main_main_default.set_img_opa(255)

# add style for screen_tick51
screen_tick51.add_style(style_screen_tick51_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick52 = lv.img(screen)
screen_tick52.set_pos(int(172),int(145))
screen_tick52.set_size(16,21)
screen_tick52.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick52.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-363493492.png','rb') as f:
        screen_tick52_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-363493492.png')
    sys.exit()

screen_tick52_img = lv.img_dsc_t({
  'data_size': len(screen_tick52_img_data),
  'header': {'always_zero': 0, 'w': 16, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick52_img_data
})

screen_tick52.set_src(screen_tick52_img)
screen_tick52.set_pivot(0,0)
screen_tick52.set_angle(0)
# create style style_screen_tick52_main_main_default
style_screen_tick52_main_main_default = lv.style_t()
style_screen_tick52_main_main_default.init()
style_screen_tick52_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick52_main_main_default.set_img_recolor_opa(0)
style_screen_tick52_main_main_default.set_img_opa(255)

# add style for screen_tick52
screen_tick52.add_style(style_screen_tick52_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick53 = lv.img(screen)
screen_tick53.set_pos(int(180),int(141))
screen_tick53.set_size(16,21)
screen_tick53.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick53.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1854264461.png','rb') as f:
        screen_tick53_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1854264461.png')
    sys.exit()

screen_tick53_img = lv.img_dsc_t({
  'data_size': len(screen_tick53_img_data),
  'header': {'always_zero': 0, 'w': 16, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick53_img_data
})

screen_tick53.set_src(screen_tick53_img)
screen_tick53.set_pivot(0,0)
screen_tick53.set_angle(0)
# create style style_screen_tick53_main_main_default
style_screen_tick53_main_main_default = lv.style_t()
style_screen_tick53_main_main_default.init()
style_screen_tick53_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick53_main_main_default.set_img_recolor_opa(0)
style_screen_tick53_main_main_default.set_img_opa(255)

# add style for screen_tick53
screen_tick53.add_style(style_screen_tick53_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick54 = lv.img(screen)
screen_tick54.set_pos(int(189),int(137))
screen_tick54.set_size(15,21)
screen_tick54.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick54.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp621526989.png','rb') as f:
        screen_tick54_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp621526989.png')
    sys.exit()

screen_tick54_img = lv.img_dsc_t({
  'data_size': len(screen_tick54_img_data),
  'header': {'always_zero': 0, 'w': 15, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick54_img_data
})

screen_tick54.set_src(screen_tick54_img)
screen_tick54.set_pivot(0,0)
screen_tick54.set_angle(0)
# create style style_screen_tick54_main_main_default
style_screen_tick54_main_main_default = lv.style_t()
style_screen_tick54_main_main_default.init()
style_screen_tick54_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick54_main_main_default.set_img_recolor_opa(0)
style_screen_tick54_main_main_default.set_img_opa(255)

# add style for screen_tick54
screen_tick54.add_style(style_screen_tick54_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick55 = lv.img(screen)
screen_tick55.set_pos(int(198),int(134))
screen_tick55.set_size(14,21)
screen_tick55.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick55.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-611210483.png','rb') as f:
        screen_tick55_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-611210483.png')
    sys.exit()

screen_tick55_img = lv.img_dsc_t({
  'data_size': len(screen_tick55_img_data),
  'header': {'always_zero': 0, 'w': 14, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick55_img_data
})

screen_tick55.set_src(screen_tick55_img)
screen_tick55.set_pivot(0,0)
screen_tick55.set_angle(0)
# create style style_screen_tick55_main_main_default
style_screen_tick55_main_main_default = lv.style_t()
style_screen_tick55_main_main_default.init()
style_screen_tick55_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick55_main_main_default.set_img_recolor_opa(0)
style_screen_tick55_main_main_default.set_img_opa(255)

# add style for screen_tick55
screen_tick55.add_style(style_screen_tick55_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick56 = lv.img(screen)
screen_tick56.set_pos(int(207),int(132))
screen_tick56.set_size(13,21)
screen_tick56.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick56.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1843947955.png','rb') as f:
        screen_tick56_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1843947955.png')
    sys.exit()

screen_tick56_img = lv.img_dsc_t({
  'data_size': len(screen_tick56_img_data),
  'header': {'always_zero': 0, 'w': 13, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick56_img_data
})

screen_tick56.set_src(screen_tick56_img)
screen_tick56.set_pivot(0,0)
screen_tick56.set_angle(0)
# create style style_screen_tick56_main_main_default
style_screen_tick56_main_main_default = lv.style_t()
style_screen_tick56_main_main_default.init()
style_screen_tick56_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick56_main_main_default.set_img_recolor_opa(0)
style_screen_tick56_main_main_default.set_img_opa(255)

# add style for screen_tick56
screen_tick56.add_style(style_screen_tick56_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick57 = lv.img(screen)
screen_tick57.set_pos(int(217),int(130))
screen_tick57.set_size(12,21)
screen_tick57.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick57.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1218281869.png','rb') as f:
        screen_tick57_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1218281869.png')
    sys.exit()

screen_tick57_img = lv.img_dsc_t({
  'data_size': len(screen_tick57_img_data),
  'header': {'always_zero': 0, 'w': 12, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick57_img_data
})

screen_tick57.set_src(screen_tick57_img)
screen_tick57.set_pivot(0,0)
screen_tick57.set_angle(0)
# create style style_screen_tick57_main_main_default
style_screen_tick57_main_main_default = lv.style_t()
style_screen_tick57_main_main_default.init()
style_screen_tick57_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick57_main_main_default.set_img_recolor_opa(0)
style_screen_tick57_main_main_default.set_img_opa(255)

# add style for screen_tick57
screen_tick57.add_style(style_screen_tick57_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick58 = lv.img(screen)
screen_tick58.set_pos(int(226),int(128))
screen_tick58.set_size(11,21)
screen_tick58.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick58.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-14455603.png','rb') as f:
        screen_tick58_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-14455603.png')
    sys.exit()

screen_tick58_img = lv.img_dsc_t({
  'data_size': len(screen_tick58_img_data),
  'header': {'always_zero': 0, 'w': 11, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick58_img_data
})

screen_tick58.set_src(screen_tick58_img)
screen_tick58.set_pivot(0,0)
screen_tick58.set_angle(0)
# create style style_screen_tick58_main_main_default
style_screen_tick58_main_main_default = lv.style_t()
style_screen_tick58_main_main_default.init()
style_screen_tick58_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick58_main_main_default.set_img_recolor_opa(0)
style_screen_tick58_main_main_default.set_img_opa(255)

# add style for screen_tick58
screen_tick58.add_style(style_screen_tick58_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick59 = lv.img(screen)
screen_tick59.set_pos(int(236),int(127))
screen_tick59.set_size(10,21)
screen_tick59.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick59.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1247193075.png','rb') as f:
        screen_tick59_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1247193075.png')
    sys.exit()

screen_tick59_img = lv.img_dsc_t({
  'data_size': len(screen_tick59_img_data),
  'header': {'always_zero': 0, 'w': 10, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick59_img_data
})

screen_tick59.set_src(screen_tick59_img)
screen_tick59.set_pivot(0,0)
screen_tick59.set_angle(0)
# create style style_screen_tick59_main_main_default
style_screen_tick59_main_main_default = lv.style_t()
style_screen_tick59_main_main_default.init()
style_screen_tick59_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick59_main_main_default.set_img_recolor_opa(0)
style_screen_tick59_main_main_default.set_img_opa(255)

# add style for screen_tick59
screen_tick59.add_style(style_screen_tick59_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick60 = lv.img(screen)
screen_tick60.set_pos(int(245),int(127))
screen_tick60.set_size(9,20)
screen_tick60.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick60.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1423623196.png','rb') as f:
        screen_tick60_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1423623196.png')
    sys.exit()

screen_tick60_img = lv.img_dsc_t({
  'data_size': len(screen_tick60_img_data),
  'header': {'always_zero': 0, 'w': 9, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick60_img_data
})

screen_tick60.set_src(screen_tick60_img)
screen_tick60.set_pivot(0,0)
screen_tick60.set_angle(0)
# create style style_screen_tick60_main_main_default
style_screen_tick60_main_main_default = lv.style_t()
style_screen_tick60_main_main_default.init()
style_screen_tick60_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick60_main_main_default.set_img_recolor_opa(0)
style_screen_tick60_main_main_default.set_img_opa(255)

# add style for screen_tick60
screen_tick60.add_style(style_screen_tick60_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick61 = lv.img(screen)
screen_tick61.set_pos(int(255),int(127))
screen_tick61.set_size(9,19)
screen_tick61.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick61.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1648574181.png','rb') as f:
        screen_tick61_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1648574181.png')
    sys.exit()

screen_tick61_img = lv.img_dsc_t({
  'data_size': len(screen_tick61_img_data),
  'header': {'always_zero': 0, 'w': 9, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick61_img_data
})

screen_tick61.set_src(screen_tick61_img)
screen_tick61.set_pivot(0,0)
screen_tick61.set_angle(0)
# create style style_screen_tick61_main_main_default
style_screen_tick61_main_main_default = lv.style_t()
style_screen_tick61_main_main_default.init()
style_screen_tick61_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick61_main_main_default.set_img_recolor_opa(0)
style_screen_tick61_main_main_default.set_img_opa(255)

# add style for screen_tick61
screen_tick61.add_style(style_screen_tick61_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick62 = lv.img(screen)
screen_tick62.set_pos(int(264),int(127))
screen_tick62.set_size(9,20)
screen_tick62.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick62.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1289609690.png','rb') as f:
        screen_tick62_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1289609690.png')
    sys.exit()

screen_tick62_img = lv.img_dsc_t({
  'data_size': len(screen_tick62_img_data),
  'header': {'always_zero': 0, 'w': 9, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick62_img_data
})

screen_tick62.set_src(screen_tick62_img)
screen_tick62.set_pivot(0,0)
screen_tick62.set_angle(0)
# create style style_screen_tick62_main_main_default
style_screen_tick62_main_main_default = lv.style_t()
style_screen_tick62_main_main_default.init()
style_screen_tick62_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick62_main_main_default.set_img_recolor_opa(0)
style_screen_tick62_main_main_default.set_img_opa(255)

# add style for screen_tick62
screen_tick62.add_style(style_screen_tick62_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick63 = lv.img(screen)
screen_tick63.set_pos(int(273),int(127))
screen_tick63.set_size(10,21)
screen_tick63.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick63.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1637819098.png','rb') as f:
        screen_tick63_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1637819098.png')
    sys.exit()

screen_tick63_img = lv.img_dsc_t({
  'data_size': len(screen_tick63_img_data),
  'header': {'always_zero': 0, 'w': 10, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick63_img_data
})

screen_tick63.set_src(screen_tick63_img)
screen_tick63.set_pivot(0,0)
screen_tick63.set_angle(0)
# create style style_screen_tick63_main_main_default
style_screen_tick63_main_main_default = lv.style_t()
style_screen_tick63_main_main_default.init()
style_screen_tick63_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick63_main_main_default.set_img_recolor_opa(0)
style_screen_tick63_main_main_default.set_img_opa(255)

# add style for screen_tick63
screen_tick63.add_style(style_screen_tick63_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick64 = lv.img(screen)
screen_tick64.set_pos(int(282),int(128))
screen_tick64.set_size(10,21)
screen_tick64.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick64.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp579938855.png','rb') as f:
        screen_tick64_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp579938855.png')
    sys.exit()

screen_tick64_img = lv.img_dsc_t({
  'data_size': len(screen_tick64_img_data),
  'header': {'always_zero': 0, 'w': 10, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick64_img_data
})

screen_tick64.set_src(screen_tick64_img)
screen_tick64.set_pivot(0,0)
screen_tick64.set_angle(0)
# create style style_screen_tick64_main_main_default
style_screen_tick64_main_main_default = lv.style_t()
style_screen_tick64_main_main_default.init()
style_screen_tick64_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick64_main_main_default.set_img_recolor_opa(0)
style_screen_tick64_main_main_default.set_img_opa(255)

# add style for screen_tick64
screen_tick64.add_style(style_screen_tick64_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick65 = lv.img(screen)
screen_tick65.set_pos(int(290),int(130))
screen_tick65.set_size(12,21)
screen_tick65.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick65.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1108753066.png','rb') as f:
        screen_tick65_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1108753066.png')
    sys.exit()

screen_tick65_img = lv.img_dsc_t({
  'data_size': len(screen_tick65_img_data),
  'header': {'always_zero': 0, 'w': 12, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick65_img_data
})

screen_tick65.set_src(screen_tick65_img)
screen_tick65.set_pivot(0,0)
screen_tick65.set_angle(0)
# create style style_screen_tick65_main_main_default
style_screen_tick65_main_main_default = lv.style_t()
style_screen_tick65_main_main_default.init()
style_screen_tick65_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick65_main_main_default.set_img_recolor_opa(0)
style_screen_tick65_main_main_default.set_img_opa(255)

# add style for screen_tick65
screen_tick65.add_style(style_screen_tick65_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick66 = lv.img(screen)
screen_tick66.set_pos(int(299),int(132))
screen_tick66.set_size(12,21)
screen_tick66.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick66.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-968456277.png','rb') as f:
        screen_tick66_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-968456277.png')
    sys.exit()

screen_tick66_img = lv.img_dsc_t({
  'data_size': len(screen_tick66_img_data),
  'header': {'always_zero': 0, 'w': 12, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick66_img_data
})

screen_tick66.set_src(screen_tick66_img)
screen_tick66.set_pivot(0,0)
screen_tick66.set_angle(0)
# create style style_screen_tick66_main_main_default
style_screen_tick66_main_main_default = lv.style_t()
style_screen_tick66_main_main_default.init()
style_screen_tick66_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick66_main_main_default.set_img_recolor_opa(0)
style_screen_tick66_main_main_default.set_img_opa(255)

# add style for screen_tick66
screen_tick66.add_style(style_screen_tick66_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick67 = lv.img(screen)
screen_tick67.set_pos(int(307),int(134))
screen_tick67.set_size(13,21)
screen_tick67.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick67.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp404829805.png','rb') as f:
        screen_tick67_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp404829805.png')
    sys.exit()

screen_tick67_img = lv.img_dsc_t({
  'data_size': len(screen_tick67_img_data),
  'header': {'always_zero': 0, 'w': 13, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick67_img_data
})

screen_tick67.set_src(screen_tick67_img)
screen_tick67.set_pivot(0,0)
screen_tick67.set_angle(0)
# create style style_screen_tick67_main_main_default
style_screen_tick67_main_main_default = lv.style_t()
style_screen_tick67_main_main_default.init()
style_screen_tick67_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick67_main_main_default.set_img_recolor_opa(0)
style_screen_tick67_main_main_default.set_img_opa(255)

# add style for screen_tick67
screen_tick67.add_style(style_screen_tick67_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick68 = lv.img(screen)
screen_tick68.set_pos(int(315),int(137))
screen_tick68.set_size(14,21)
screen_tick68.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick68.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1778115887.png','rb') as f:
        screen_tick68_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1778115887.png')
    sys.exit()

screen_tick68_img = lv.img_dsc_t({
  'data_size': len(screen_tick68_img_data),
  'header': {'always_zero': 0, 'w': 14, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick68_img_data
})

screen_tick68.set_src(screen_tick68_img)
screen_tick68.set_pivot(0,0)
screen_tick68.set_angle(0)
# create style style_screen_tick68_main_main_default
style_screen_tick68_main_main_default = lv.style_t()
style_screen_tick68_main_main_default.init()
style_screen_tick68_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick68_main_main_default.set_img_recolor_opa(0)
style_screen_tick68_main_main_default.set_img_opa(255)

# add style for screen_tick68
screen_tick68.add_style(style_screen_tick68_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick69 = lv.img(screen)
screen_tick69.set_pos(int(323),int(141))
screen_tick69.set_size(15,21)
screen_tick69.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick69.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1143565327.png','rb') as f:
        screen_tick69_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1143565327.png')
    sys.exit()

screen_tick69_img = lv.img_dsc_t({
  'data_size': len(screen_tick69_img_data),
  'header': {'always_zero': 0, 'w': 15, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick69_img_data
})

screen_tick69.set_src(screen_tick69_img)
screen_tick69.set_pivot(0,0)
screen_tick69.set_angle(0)
# create style style_screen_tick69_main_main_default
style_screen_tick69_main_main_default = lv.style_t()
style_screen_tick69_main_main_default.init()
style_screen_tick69_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick69_main_main_default.set_img_recolor_opa(0)
style_screen_tick69_main_main_default.set_img_opa(255)

# add style for screen_tick69
screen_tick69.add_style(style_screen_tick69_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick70 = lv.img(screen)
screen_tick70.set_pos(int(331),int(145))
screen_tick70.set_size(16,21)
screen_tick70.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick70.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-442002488.png','rb') as f:
        screen_tick70_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-442002488.png')
    sys.exit()

screen_tick70_img = lv.img_dsc_t({
  'data_size': len(screen_tick70_img_data),
  'header': {'always_zero': 0, 'w': 16, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick70_img_data
})

screen_tick70.set_src(screen_tick70_img)
screen_tick70.set_pivot(0,0)
screen_tick70.set_angle(0)
# create style style_screen_tick70_main_main_default
style_screen_tick70_main_main_default = lv.style_t()
style_screen_tick70_main_main_default.init()
style_screen_tick70_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick70_main_main_default.set_img_recolor_opa(0)
style_screen_tick70_main_main_default.set_img_opa(255)

# add style for screen_tick70
screen_tick70.add_style(style_screen_tick70_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick71 = lv.img(screen)
screen_tick71.set_pos(int(339),int(149))
screen_tick71.set_size(16,21)
screen_tick71.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick71.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1775755465.png','rb') as f:
        screen_tick71_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1775755465.png')
    sys.exit()

screen_tick71_img = lv.img_dsc_t({
  'data_size': len(screen_tick71_img_data),
  'header': {'always_zero': 0, 'w': 16, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick71_img_data
})

screen_tick71.set_src(screen_tick71_img)
screen_tick71.set_pivot(0,0)
screen_tick71.set_angle(0)
# create style style_screen_tick71_main_main_default
style_screen_tick71_main_main_default = lv.style_t()
style_screen_tick71_main_main_default.init()
style_screen_tick71_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick71_main_main_default.set_img_recolor_opa(0)
style_screen_tick71_main_main_default.set_img_opa(255)

# add style for screen_tick71
screen_tick71.add_style(style_screen_tick71_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick72 = lv.img(screen)
screen_tick72.set_pos(int(346),int(154))
screen_tick72.set_size(17,21)
screen_tick72.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick72.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1145925749.png','rb') as f:
        screen_tick72_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1145925749.png')
    sys.exit()

screen_tick72_img = lv.img_dsc_t({
  'data_size': len(screen_tick72_img_data),
  'header': {'always_zero': 0, 'w': 17, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick72_img_data
})

screen_tick72.set_src(screen_tick72_img)
screen_tick72.set_pivot(0,0)
screen_tick72.set_angle(0)
# create style style_screen_tick72_main_main_default
style_screen_tick72_main_main_default = lv.style_t()
style_screen_tick72_main_main_default.init()
style_screen_tick72_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick72_main_main_default.set_img_recolor_opa(0)
style_screen_tick72_main_main_default.set_img_opa(255)

# add style for screen_tick72
screen_tick72.add_style(style_screen_tick72_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick73 = lv.img(screen)
screen_tick73.set_pos(int(354),int(159))
screen_tick73.set_size(17,21)
screen_tick73.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick73.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1071832204.png','rb') as f:
        screen_tick73_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp1071832204.png')
    sys.exit()

screen_tick73_img = lv.img_dsc_t({
  'data_size': len(screen_tick73_img_data),
  'header': {'always_zero': 0, 'w': 17, 'h': 21, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick73_img_data
})

screen_tick73.set_src(screen_tick73_img)
screen_tick73.set_pivot(0,0)
screen_tick73.set_angle(0)
# create style style_screen_tick73_main_main_default
style_screen_tick73_main_main_default = lv.style_t()
style_screen_tick73_main_main_default.init()
style_screen_tick73_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick73_main_main_default.set_img_recolor_opa(0)
style_screen_tick73_main_main_default.set_img_opa(255)

# add style for screen_tick73
screen_tick73.add_style(style_screen_tick73_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick74 = lv.img(screen)
screen_tick74.set_pos(int(360),int(165))
screen_tick74.set_size(19,20)
screen_tick74.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick74.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp247336718.png','rb') as f:
        screen_tick74_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp247336718.png')
    sys.exit()

screen_tick74_img = lv.img_dsc_t({
  'data_size': len(screen_tick74_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick74_img_data
})

screen_tick74.set_src(screen_tick74_img)
screen_tick74.set_pivot(0,0)
screen_tick74.set_angle(0)
# create style style_screen_tick74_main_main_default
style_screen_tick74_main_main_default = lv.style_t()
style_screen_tick74_main_main_default.init()
style_screen_tick74_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick74_main_main_default.set_img_recolor_opa(0)
style_screen_tick74_main_main_default.set_img_opa(255)

# add style for screen_tick74
screen_tick74.add_style(style_screen_tick74_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick75 = lv.img(screen)
screen_tick75.set_pos(int(367),int(171))
screen_tick75.set_size(19,20)
screen_tick75.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick75.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1829872625.png','rb') as f:
        screen_tick75_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1829872625.png')
    sys.exit()

screen_tick75_img = lv.img_dsc_t({
  'data_size': len(screen_tick75_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick75_img_data
})

screen_tick75.set_src(screen_tick75_img)
screen_tick75.set_pivot(0,0)
screen_tick75.set_angle(0)
# create style style_screen_tick75_main_main_default
style_screen_tick75_main_main_default = lv.style_t()
style_screen_tick75_main_main_default.init()
style_screen_tick75_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick75_main_main_default.set_img_recolor_opa(0)
style_screen_tick75_main_main_default.set_img_opa(255)

# add style for screen_tick75
screen_tick75.add_style(style_screen_tick75_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick76 = lv.img(screen)
screen_tick76.set_pos(int(374),int(178))
screen_tick76.set_size(19,19)
screen_tick76.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick76.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp679843066.png','rb') as f:
        screen_tick76_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp679843066.png')
    sys.exit()

screen_tick76_img = lv.img_dsc_t({
  'data_size': len(screen_tick76_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick76_img_data
})

screen_tick76.set_src(screen_tick76_img)
screen_tick76.set_pivot(0,0)
screen_tick76.set_angle(0)
# create style style_screen_tick76_main_main_default
style_screen_tick76_main_main_default = lv.style_t()
style_screen_tick76_main_main_default.init()
style_screen_tick76_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick76_main_main_default.set_img_recolor_opa(0)
style_screen_tick76_main_main_default.set_img_opa(255)

# add style for screen_tick76
screen_tick76.add_style(style_screen_tick76_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick77 = lv.img(screen)
screen_tick77.set_pos(int(380),int(185))
screen_tick77.set_size(19,19)
screen_tick77.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick77.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1397366277.png','rb') as f:
        screen_tick77_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1397366277.png')
    sys.exit()

screen_tick77_img = lv.img_dsc_t({
  'data_size': len(screen_tick77_img_data),
  'header': {'always_zero': 0, 'w': 19, 'h': 19, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick77_img_data
})

screen_tick77.set_src(screen_tick77_img)
screen_tick77.set_pivot(0,0)
screen_tick77.set_angle(0)
# create style style_screen_tick77_main_main_default
style_screen_tick77_main_main_default = lv.style_t()
style_screen_tick77_main_main_default.init()
style_screen_tick77_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick77_main_main_default.set_img_recolor_opa(0)
style_screen_tick77_main_main_default.set_img_opa(255)

# add style for screen_tick77
screen_tick77.add_style(style_screen_tick77_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick78 = lv.img(screen)
screen_tick78.set_pos(int(385),int(192))
screen_tick78.set_size(20,18)
screen_tick78.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick78.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1931429999.png','rb') as f:
        screen_tick78_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1931429999.png')
    sys.exit()

screen_tick78_img = lv.img_dsc_t({
  'data_size': len(screen_tick78_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 18, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick78_img_data
})

screen_tick78.set_src(screen_tick78_img)
screen_tick78.set_pivot(0,0)
screen_tick78.set_angle(0)
# create style style_screen_tick78_main_main_default
style_screen_tick78_main_main_default = lv.style_t()
style_screen_tick78_main_main_default.init()
style_screen_tick78_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick78_main_main_default.set_img_recolor_opa(0)
style_screen_tick78_main_main_default.set_img_opa(255)

# add style for screen_tick78
screen_tick78.add_style(style_screen_tick78_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick79 = lv.img(screen)
screen_tick79.set_pos(int(391),int(199))
screen_tick79.set_size(20,18)
screen_tick79.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick79.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp286327954.png','rb') as f:
        screen_tick79_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp286327954.png')
    sys.exit()

screen_tick79_img = lv.img_dsc_t({
  'data_size': len(screen_tick79_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 18, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick79_img_data
})

screen_tick79.set_src(screen_tick79_img)
screen_tick79.set_pivot(0,0)
screen_tick79.set_angle(0)
# create style style_screen_tick79_main_main_default
style_screen_tick79_main_main_default = lv.style_t()
style_screen_tick79_main_main_default.init()
style_screen_tick79_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick79_main_main_default.set_img_recolor_opa(0)
style_screen_tick79_main_main_default.set_img_opa(255)

# add style for screen_tick79
screen_tick79.add_style(style_screen_tick79_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick80 = lv.img(screen)
screen_tick80.set_pos(int(396),int(207))
screen_tick80.set_size(21,17)
screen_tick80.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick80.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-365418904.png','rb') as f:
        screen_tick80_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-365418904.png')
    sys.exit()

screen_tick80_img = lv.img_dsc_t({
  'data_size': len(screen_tick80_img_data),
  'header': {'always_zero': 0, 'w': 21, 'h': 17, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick80_img_data
})

screen_tick80.set_src(screen_tick80_img)
screen_tick80.set_pivot(0,0)
screen_tick80.set_angle(0)
# create style style_screen_tick80_main_main_default
style_screen_tick80_main_main_default = lv.style_t()
style_screen_tick80_main_main_default.init()
style_screen_tick80_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick80_main_main_default.set_img_recolor_opa(0)
style_screen_tick80_main_main_default.set_img_opa(255)

# add style for screen_tick80
screen_tick80.add_style(style_screen_tick80_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_tick81 = lv.img(screen)
screen_tick81.set_pos(int(401),int(215))
screen_tick81.set_size(20,17)
screen_tick81.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_tick81.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1598156376.png','rb') as f:
        screen_tick81_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-1598156376.png')
    sys.exit()

screen_tick81_img = lv.img_dsc_t({
  'data_size': len(screen_tick81_img_data),
  'header': {'always_zero': 0, 'w': 20, 'h': 17, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_tick81_img_data
})

screen_tick81.set_src(screen_tick81_img)
screen_tick81.set_pivot(0,0)
screen_tick81.set_angle(0)
# create style style_screen_tick81_main_main_default
style_screen_tick81_main_main_default = lv.style_t()
style_screen_tick81_main_main_default.init()
style_screen_tick81_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_tick81_main_main_default.set_img_recolor_opa(0)
style_screen_tick81_main_main_default.set_img_opa(255)

# add style for screen_tick81
screen_tick81.add_style(style_screen_tick81_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_light_engine = lv.img(screen)
screen_light_engine.set_pos(int(204),int(415))
screen_light_engine.set_size(39,25)
screen_light_engine.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_light_engine.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-666971998.png','rb') as f:
        screen_light_engine_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-666971998.png')
    sys.exit()

screen_light_engine_img = lv.img_dsc_t({
  'data_size': len(screen_light_engine_img_data),
  'header': {'always_zero': 0, 'w': 39, 'h': 25, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_light_engine_img_data
})

screen_light_engine.set_src(screen_light_engine_img)
screen_light_engine.set_pivot(0,0)
screen_light_engine.set_angle(0)
# create style style_screen_light_engine_main_main_default
style_screen_light_engine_main_main_default = lv.style_t()
style_screen_light_engine_main_main_default.init()
style_screen_light_engine_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_light_engine_main_main_default.set_img_recolor_opa(0)
style_screen_light_engine_main_main_default.set_img_opa(255)

# add style for screen_light_engine
screen_light_engine.add_style(style_screen_light_engine_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_light_oil = lv.img(screen)
screen_light_oil.set_pos(int(269),int(418))
screen_light_oil.set_size(52,20)
screen_light_oil.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_light_oil.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp814540406.png','rb') as f:
        screen_light_oil_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp814540406.png')
    sys.exit()

screen_light_oil_img = lv.img_dsc_t({
  'data_size': len(screen_light_oil_img_data),
  'header': {'always_zero': 0, 'w': 52, 'h': 20, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_light_oil_img_data
})

screen_light_oil.set_src(screen_light_oil_img)
screen_light_oil.set_pivot(0,0)
screen_light_oil.set_angle(0)
# create style style_screen_light_oil_main_main_default
style_screen_light_oil_main_main_default = lv.style_t()
style_screen_light_oil_main_main_default.init()
style_screen_light_oil_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_light_oil_main_main_default.set_img_recolor_opa(0)
style_screen_light_oil_main_main_default.set_img_opa(255)

# add style for screen_light_oil
screen_light_oil.add_style(style_screen_light_oil_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_speed_label = lv.label(screen)
screen_speed_label.set_pos(int(336),int(285))
screen_speed_label.set_size(65,22)
screen_speed_label.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_speed_label.set_text("km/h")
screen_speed_label.set_long_mode(lv.label.LONG.WRAP)
# create style style_screen_speed_label_main_main_default
style_screen_speed_label_main_main_default = lv.style_t()
style_screen_speed_label_main_main_default.init()
style_screen_speed_label_main_main_default.set_radius(0)
style_screen_speed_label_main_main_default.set_bg_color(lv.color_make(0x21,0x95,0xf6))
style_screen_speed_label_main_main_default.set_bg_grad_color(lv.color_make(0x21,0x95,0xf6))
style_screen_speed_label_main_main_default.set_bg_grad_dir(lv.GRAD_DIR.NONE)
style_screen_speed_label_main_main_default.set_bg_opa(0)
style_screen_speed_label_main_main_default.set_text_color(lv.color_make(0x21,0x95,0xf6))
try:
    style_screen_speed_label_main_main_default.set_text_font(lv.font_montserratMedium_20)
except AttributeError:
    try:
        style_screen_speed_label_main_main_default.set_text_font(lv.font_montserrat_20)
    except AttributeError:
        style_screen_speed_label_main_main_default.set_text_font(lv.font_montserrat_16)
style_screen_speed_label_main_main_default.set_text_letter_space(2)
style_screen_speed_label_main_main_default.set_text_line_space(0)
style_screen_speed_label_main_main_default.set_text_align(lv.TEXT_ALIGN.CENTER)
style_screen_speed_label_main_main_default.set_pad_left(0)
style_screen_speed_label_main_main_default.set_pad_right(0)
style_screen_speed_label_main_main_default.set_pad_top(0)
style_screen_speed_label_main_main_default.set_pad_bottom(0)

# add style for screen_speed_label
screen_speed_label.add_style(style_screen_speed_label_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_Gear_label = lv.label(screen)
screen_Gear_label.set_pos(int(283),int(358))
screen_Gear_label.set_size(65,26)
screen_Gear_label.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_Gear_label.set_text("Gear")
screen_Gear_label.set_long_mode(lv.label.LONG.WRAP)
# create style style_screen_gear_label_main_main_default
style_screen_gear_label_main_main_default = lv.style_t()
style_screen_gear_label_main_main_default.init()
style_screen_gear_label_main_main_default.set_radius(0)
style_screen_gear_label_main_main_default.set_bg_color(lv.color_make(0x21,0x95,0xf6))
style_screen_gear_label_main_main_default.set_bg_grad_color(lv.color_make(0x21,0x95,0xf6))
style_screen_gear_label_main_main_default.set_bg_grad_dir(lv.GRAD_DIR.NONE)
style_screen_gear_label_main_main_default.set_bg_opa(0)
style_screen_gear_label_main_main_default.set_text_color(lv.color_make(0x21,0x95,0xf6))
try:
    style_screen_gear_label_main_main_default.set_text_font(lv.font_montserratMedium_20)
except AttributeError:
    try:
        style_screen_gear_label_main_main_default.set_text_font(lv.font_montserrat_20)
    except AttributeError:
        style_screen_gear_label_main_main_default.set_text_font(lv.font_montserrat_16)
style_screen_gear_label_main_main_default.set_text_letter_space(2)
style_screen_gear_label_main_main_default.set_text_line_space(0)
style_screen_gear_label_main_main_default.set_text_align(lv.TEXT_ALIGN.CENTER)
style_screen_gear_label_main_main_default.set_pad_left(0)
style_screen_gear_label_main_main_default.set_pad_right(0)
style_screen_gear_label_main_main_default.set_pad_top(0)
style_screen_gear_label_main_main_default.set_pad_bottom(0)

# add style for screen_Gear_label
screen_Gear_label.add_style(style_screen_gear_label_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_speed = lv.label(screen)
screen_speed.set_pos(int(185),int(225))
screen_speed.set_size(148,77)
screen_speed.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_speed.set_text("000")
screen_speed.set_long_mode(lv.label.LONG.WRAP)
# create style style_screen_speed_main_main_default
style_screen_speed_main_main_default = lv.style_t()
style_screen_speed_main_main_default.init()
style_screen_speed_main_main_default.set_radius(0)
style_screen_speed_main_main_default.set_bg_color(lv.color_make(0x21,0x95,0xf6))
style_screen_speed_main_main_default.set_bg_grad_color(lv.color_make(0x21,0x95,0xf6))
style_screen_speed_main_main_default.set_bg_grad_dir(lv.GRAD_DIR.NONE)
style_screen_speed_main_main_default.set_bg_opa(0)
style_screen_speed_main_main_default.set_text_color(lv.color_make(0xff,0xff,0xff))
try:
    style_screen_speed_main_main_default.set_text_font(lv.font_Abel_regular_90)
except AttributeError:
    try:
        style_screen_speed_main_main_default.set_text_font(lv.font_montserrat_90)
    except AttributeError:
        style_screen_speed_main_main_default.set_text_font(lv.font_montserrat_16)
style_screen_speed_main_main_default.set_text_letter_space(2)
style_screen_speed_main_main_default.set_text_line_space(0)
style_screen_speed_main_main_default.set_text_align(lv.TEXT_ALIGN.CENTER)
style_screen_speed_main_main_default.set_pad_left(0)
style_screen_speed_main_main_default.set_pad_right(0)
style_screen_speed_main_main_default.set_pad_top(0)
style_screen_speed_main_main_default.set_pad_bottom(0)

# add style for screen_speed
screen_speed.add_style(style_screen_speed_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_Gear = lv.label(screen)
screen_Gear.set_pos(int(238),int(316))
screen_Gear.set_size(45,68)
screen_Gear.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_Gear.set_text("N")
screen_Gear.set_long_mode(lv.label.LONG.WRAP)
# create style style_screen_gear_main_main_default
style_screen_gear_main_main_default = lv.style_t()
style_screen_gear_main_main_default.init()
style_screen_gear_main_main_default.set_radius(0)
style_screen_gear_main_main_default.set_bg_color(lv.color_make(0x21,0x95,0xf6))
style_screen_gear_main_main_default.set_bg_grad_color(lv.color_make(0x21,0x95,0xf6))
style_screen_gear_main_main_default.set_bg_grad_dir(lv.GRAD_DIR.NONE)
style_screen_gear_main_main_default.set_bg_opa(0)
style_screen_gear_main_main_default.set_text_color(lv.color_make(0xff,0xff,0xff))
try:
    style_screen_gear_main_main_default.set_text_font(lv.font_Abel_regular_70)
except AttributeError:
    try:
        style_screen_gear_main_main_default.set_text_font(lv.font_montserrat_70)
    except AttributeError:
        style_screen_gear_main_main_default.set_text_font(lv.font_montserrat_16)
style_screen_gear_main_main_default.set_text_letter_space(2)
style_screen_gear_main_main_default.set_text_line_space(0)
style_screen_gear_main_main_default.set_text_align(lv.TEXT_ALIGN.CENTER)
style_screen_gear_main_main_default.set_pad_left(0)
style_screen_gear_main_main_default.set_pad_right(0)
style_screen_gear_main_main_default.set_pad_top(0)
style_screen_gear_main_main_default.set_pad_bottom(0)

# add style for screen_Gear
screen_Gear.add_style(style_screen_gear_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_signal_leftOn = lv.img(screen)
screen_signal_leftOn.set_pos(int(46),int(46))
screen_signal_leftOn.set_size(48,40)
screen_signal_leftOn.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_signal_leftOn.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp2091786351.png','rb') as f:
        screen_signal_leftOn_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp2091786351.png')
    sys.exit()

screen_signal_leftOn_img = lv.img_dsc_t({
  'data_size': len(screen_signal_leftOn_img_data),
  'header': {'always_zero': 0, 'w': 48, 'h': 40, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_signal_leftOn_img_data
})

screen_signal_leftOn.set_src(screen_signal_leftOn_img)
screen_signal_leftOn.set_pivot(0,0)
screen_signal_leftOn.set_angle(0)
# create style style_screen_signal_lefton_main_main_default
style_screen_signal_lefton_main_main_default = lv.style_t()
style_screen_signal_lefton_main_main_default.init()
style_screen_signal_lefton_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_signal_lefton_main_main_default.set_img_recolor_opa(0)
style_screen_signal_lefton_main_main_default.set_img_opa(255)

# add style for screen_signal_leftOn
screen_signal_leftOn.add_style(style_screen_signal_lefton_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)

screen_signal_rightOn = lv.img(screen)
screen_signal_rightOn.set_pos(int(387),int(46))
screen_signal_rightOn.set_size(48,40)
screen_signal_rightOn.set_scrollbar_mode(lv.SCROLLBAR_MODE.OFF)
screen_signal_rightOn.add_flag(lv.obj.FLAG.CLICKABLE)
try:
    with open('C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-727083534.png','rb') as f:
        screen_signal_rightOn_img_data = f.read()
except:
    print('Could not open C:\\nxp\\GUI-Guider-Projects\\motor_panel_new\\generated\\mPythonImages\\mp-727083534.png')
    sys.exit()

screen_signal_rightOn_img = lv.img_dsc_t({
  'data_size': len(screen_signal_rightOn_img_data),
  'header': {'always_zero': 0, 'w': 48, 'h': 40, 'cf': lv.img.CF.TRUE_COLOR_ALPHA},
  'data': screen_signal_rightOn_img_data
})

screen_signal_rightOn.set_src(screen_signal_rightOn_img)
screen_signal_rightOn.set_pivot(0,0)
screen_signal_rightOn.set_angle(0)
# create style style_screen_signal_righton_main_main_default
style_screen_signal_righton_main_main_default = lv.style_t()
style_screen_signal_righton_main_main_default.init()
style_screen_signal_righton_main_main_default.set_img_recolor(lv.color_make(0xff,0xff,0xff))
style_screen_signal_righton_main_main_default.set_img_recolor_opa(0)
style_screen_signal_righton_main_main_default.set_img_opa(255)

# add style for screen_signal_rightOn
screen_signal_rightOn.add_style(style_screen_signal_righton_main_main_default, lv.PART.MAIN|lv.STATE.DEFAULT)




# content from custom.py

# Load the default screen
lv.scr_load(screen)

while SDL.check():
    time.sleep_ms(5)
