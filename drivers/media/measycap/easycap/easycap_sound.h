/*****************************************************************************
*                                                                            *
*  easycap_sound.h                                                           *
*                                                                            *
*****************************************************************************/
/*
 *
 *  Copyright (C) 2010 R.M. Thomas  <rmthomas@sciolus.org>
 *
 *
 *  This is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  The software is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this software; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
*/
/*****************************************************************************/
#if !defined(EASYCAP_SOUND_H)
#define EASYCAP_SOUND_H

extern int easycap_debug;
extern int easycap_gain;
extern struct easycap_dongle easycapdc60_dongle[];
extern struct easycap *peasycap;
extern struct usb_driver easycap_usb_driver;
#if defined(EASYCAP_NEEDS_ALSA)
extern struct snd_pcm_hardware easycap_pcm_hardware;
#else
extern struct usb_class_driver easyoss_class;
extern const struct file_operations easyoss_fops;
#endif /*EASYCAP_NEEDS_ALSA*/

#endif /*EASYCAP_SOUND_H*/
