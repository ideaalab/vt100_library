/* 
 * File:   vt100.h
 * Author: Martin
 *
 * Created on 24 de marzo de 2020, 10:36
 
 http://ascii-table.com/ansi-escape-sequences-vt-100.php
 http://ascii-table.com/ansi-escape-sequences.php
 http://www.termsys.demon.co.uk/vtansi.htm
 http://braun-home.net/michael/info/misc/VT100_commands.htm
 https://en.wikipedia.org/wiki/ANSI_escape_code
 Colors: http://softwarelivre.org/terceiro/blog/a-visual-cheat-sheet-for-ansi-color-codes
 */

#ifndef VT100_H
#define	VT100_H

//setup
#define ANSI_RST			"\x1Bc"		//Reset all terminal settings to default

#define ANSI_NLM			"\x1B[20h"	//Set new line mode
#define ANSI_LFM			"\x1B[20l"	//Set line feed mode

#define ANSI_SS				"\x1B[?4h"	//Set smooth scrolling
#define ANSI_JS				"\x1B[?4l"	//Set jump scrolling

#define ANSI_RVOS			"\x1B[?5h"	//Set reverse video on screen
#define ANSI_NVOS			"\x1B[?5l"	//Set normal video on screen

#define ANSI_O2R			"\x1B[?6h"	//Set origin to relative
#define ANSI_O2A			"\x1B[?6l"	//Set origin to absolute

#define ANSI_TWE			"\x1B[?7h"	//Enable text wraps
#define ANSI_TWD			"\x1B[?7l"	//Disable text wrap

//cursor
#define ANSI_HOME			"\x1B[H"	//Move cursor to upper left corner

#define ANSI_SAVEC			"\x1B7"		//Save cursor position and attributes
#define ANSI_RESTC			"\x1B8"		//Restore cursor position and attributes
	
//scroll
#define ANSI_SU				"\x1BD"		//Move/scroll window up one line
#define ANSI_SD				"\x1BM"		//Move/scroll window down one line
#define ANSI_NEL			"\x1BE"		//Move to next line
	
//clear line
#define ANSI_CLR			"\x1B[K"	//Clear line from cursor right
#define ANSI_CLL			"\x1B[1K"	//Clear line from cursor left
#define ANSI_CL				"\x1B[2K"	//Clear entire line
	
//clear screen
#define ANSI_CLSD			"\x1B[J"	//Clear screen from cursor down
#define ANSI_CLSU			"\x1B[1J"	//Clear screen from cursor up
#define ANSI_CLS			"\x1B[2J"	//Clear entire screen

//leds
#define ANSI_LEDS_OFF		"\x1B[0q"	//All four leds off
#define ANSI_LED1_ON		"\x1B[1q"	//Turn on LED 1
#define ANSI_LED2_ON		"\x1B[2q"	//Turn on LED 2
#define ANSI_LED3_ON		"\x1B[3q"	//Turn on LED 3
#define ANSI_LED4_ON		"\x1B[4q"	//Turn on LED 4

//attributes
#define ANSI_RESET_ATTR		"\x1B[m"	//Reset all attributes

//constants for moveCursorRelative())
#define ANSI_CUR_UP			'A'
#define ANSI_CUR_DOWN		'B'
#define ANSI_CUR_RIGHT		'C'
#define ANSI_CUR_LEFT		'D'

//constants for moveLine()
#define ANSI_LINE_DOWN		'E'
#define ANSI_LINE_UP		'F'

//constants for SGR()
#define ANSI_RST_ATTR		0	//Reset all attributes
#define ANSI_BOLD			1	//Bold font
#define ANSI_DIM			2	//Dim font
#define ANSI_ITALIC			3	//Italic font (not widely supported)
#define ANSI_UNDERLINE		4	//Underline
#define ANSI_BLINK_S		5	//Slow blink
#define ANSI_BLINK_F		6	//Fast blink
#define ANSI_INVERT			7	//Invert video
#define ANSI_INVISIBLE		8	//Invisible text  (not widely supported)
#define ANSI_STRIKE			9	//Strike trough font

#define ANSI_BOLD_OFF		21	//Bold font off / double underline ¿?
#define ANSI_DIM_OFF		22	//Dim font off
#define ANSI_ITALIC_OFF		23	//Italic font off
#define ANSI_UNDERLINE_OFF	24	//Underline
#define ANSI_BLINK_OFF		25	//Slow blink
#define ANSI_INVERT_OFF		27	//Invert video off
#define ANSI_INVISIBLE_OFF	28	//Invisible text off (show)
#define ANSI_STRIKE_OFF		29	//Strike trough font off

//constants for SGR (foreground color)
#define ANSI_F_BLACK		30	//black
#define ANSI_F_RED			31	//red
#define ANSI_F_GREEN		32	//green
#define ANSI_F_YELLOW		33	//Yellow
#define ANSI_F_BLUE			34	//Blue
#define ANSI_F_MAGENTA		35	//Magenta
#define ANSI_F_CYAN			36	//Cyan
#define ANSI_F_WHITE		37	//White
#define ANSI_F_DEFAULT		39	//Default

//constants for SGR (background color)
#define ANSI_B_BLACK		40	//black
#define ANSI_B_RED			41	//red
#define ANSI_B_GREEN		42	//green
#define ANSI_B_YELLOW		43	//Yellow
#define ANSI_B_BLUE			44	//Blue
#define ANSI_B_MAGENTA		45	//Magenta
#define ANSI_B_CYAN			46	//Cyan
#define ANSI_B_WHITE		47	//White
#define ANSI_B_DEFAULT		49	//Default

#endif	/* VT100_H */

