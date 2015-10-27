/* Copyright (c) 2014-2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_SHARP_WQXGA_DUALDSI_VIDEO_H_
#define _PANEL_SHARP_WQXGA_DUALDSI_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config sharp_wqxga_dualdsi_video_panel_data = {
	"qcom,mdss_dsi_sharp_wqxga_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 1, 0, 0, 0, 0, 0, 25, 1, 0,
	"qcom,mdss_dsi_sharp_wqxga_video"
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution sharp_wqxga_dualdsi_video_panel_res = {
	1600, 2560, 76, 32, 16, 0, 2, 11, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info sharp_wqxga_dualdsi_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char sharp_wqxga_dualdsi_video_on_cmd0[] = {
	0x11, 0x00, 0x05, 0x80
};

static char sharp_wqxga_dualdsi_video_on_cmd1[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd sharp_wqxga_dualdsi_video_on_command[] = {
	{0x4, sharp_wqxga_dualdsi_video_on_cmd0, 0x0a},
	{0x4, sharp_wqxga_dualdsi_video_on_cmd1, 0x02}
};

#define SHARP_WQXGA_DUALDSI_VIDEO_ON_COMMAND 2


static char sharp_wqxga_dualdsi_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char sharp_wqxga_dualdsi_videooff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd sharp_wqxga_dualdsi_video_off_command[] = {
	{0x4, sharp_wqxga_dualdsi_videooff_cmd0, 0x32},
	{0x4, sharp_wqxga_dualdsi_videooff_cmd1, 0x78}
};

#define SHARP_WQXGA_DUALDSI_VIDEO_OFF_COMMAND 2

static struct command_state sharp_wqxga_dualdsi_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info sharp_wqxga_dualdsi_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info sharp_wqxga_dualdsi_video_video_panel = {
	0, 0, 0, 0, 1, 1, 1, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration sharp_wqxga_dualdsi_video_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t sharp_wqxga_dualdsi_video_timings[] = {
	0xe2, 0x36, 0x24, 0x00, 0x66, 0x6a, 0x28, 0x38,  0x2a, 0x03, 0x04, 0x00
};

static const uint32_t sharp_wqxga_dualdsi_thulium_video_timings[] = {
	0x23, 0x20, 0x06, 0x09, 0x05, 0x03, 0x04, 0xa0,
	0x23, 0x20, 0x06, 0x09, 0x05, 0x03, 0x04, 0xa0,
	0x23, 0x20, 0x06, 0x09, 0x05, 0x03, 0x04, 0xa0,
	0x23, 0x20, 0x06, 0x09, 0x05, 0x03, 0x04, 0xa0,
	0x23, 0x2e, 0x06, 0x08, 0x05, 0x03, 0x04, 0xa0
};

static struct panel_timing sharp_wqxga_dualdsi_video_timing_info = {
	0x0, 0x04, 0x02, 0x2a
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence sharp_wqxga_dualdsi_video_reset_seq = {
	{1, 0, 1, }, {2, 5, 120, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight sharp_wqxga_dualdsi_video_backlight = {
	1, 1, 4095, 100, 1, "PMIC_8941"		/* BL_WLED */
};

static struct labibb_desc sharp_wqxga_dualdsi_video_labibb = {
	0, 1, 5500000, 5500000, 5500000, 5500000, 3, 3, 1
};

/*---------------------------------------------------------------------------*/
/* Dynamic fps supported frequencies by panel                                */
/*---------------------------------------------------------------------------*/
static const struct dfps_panel_info sharp_wqxga_dualdsi_video_dfps = {
	1, 8, {53, 54, 55, 56, 57, 58, 59, 60}
};

/* 2LM + 2CTL */
struct topology_config sharp_wqxga_dualdsi_video_config0 = {
	"config0", {800, 800}, 0, NULL, false
};

/* 1LM + 1CTL + PP_SPLIT */
struct topology_config sharp_wqxga_dualdsi_video_config1 = {
	"config1", {-1, -1}, 0, NULL, true
};

#define SHARP_WQXGA_DUALDSI_VIDEO_SIGNATURE 0x210000

#endif /*_PANEL_SHARP_WQXGA_DUALDSI_VIDEO_H_*/
