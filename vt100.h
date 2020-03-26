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

//characters
#define ANSI_OCA			"\x1B[m"	//Turn off character attributes
#define ANSI_BMO			"\x1B[1m"	//Turn bold mode on
#define ANSI_LIM			"\x1B[2m"	//Turn low intensity mode on (bold off)
#define ANSI_UM				"\x1B[4m"	//Turn underline mode on
#define ANSI_BM				"\x1B[5m"	//Turn blinking mode on
#define ANSI_RV				"\x1B[7m"	//Turn reverse video on
#define ANSI_ITM			"\x1B[8m"	//Turn invisible text mode on

//foreground color
#define ANSI_F_BLACK		"\x1B[30m"	//black
#define ANSI_F_RED			"\x1B[31m"	//red
#define ANSI_F_GREEN		"\x1B[32m"	//green
#define ANSI_F_YELLOW		"\x1B[33m"	//Yellow
#define ANSI_F_BLUE			"\x1B[34m"	//Blue
#define ANSI_F_MAGENTA		"\x1B[35m"	//Magenta
#define ANSI_F_CYAN			"\x1B[36m"	//Cyan
#define ANSI_F_WHITE		"\x1B[37m"	//White

//background color
#define ANSI_B_BLACK		"\x1B[40m"	//black
#define ANSI_B_RED			"\x1B[41m"	//red
#define ANSI_B_GREEN		"\x1B[42m"	//green
#define ANSI_B_YELLOW		"\x1B[43m"	//Yellow
#define ANSI_B_BLUE			"\x1B[44m"	//Blue
#define ANSI_B_MAGENTA		"\x1B[45m"	//Magenta
#define ANSI_B_CYAN			"\x1B[46m"	//Cyan
#define ANSI_B_WHITE		"\x1B[47m"	//White

//cursor position
#define ANSI_CUU(n)			"\x1B[nA"	//Move cursor up n lines
#define ANSI_CUD(n)			"\x1B[nB"	//Move cursor down n lines
#define ANSI_CUR(n)			"\x1B[nC"	//Move cursor right n lines
#define ANSI_CUL(n)			"\x1B[nD"	//Move cursor left n lines

#define ANSI_CUP(x,y)		"\x1B[x;yH"	//Move cursor to screen location v,h

#define ANSI_HOME			"\x1B[H"	//Move cursor to upper left corner
#define ANSI_HVHOME			"\x1B[f"	//Move cursor to upper left corner

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

#endif	/* VT100_H */

