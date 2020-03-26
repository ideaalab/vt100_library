#include "vt100.h"

/*
 * Move the cursor relative to the actual position
 * num = number of positions to move
 * dir = direction to move (use defines ANSI_CUR_UP/ANSI_CUR_DOWN/ANSI_CUR_RIGHT/ANSI_CUR_LEFT)
 */
void moveCursorRelative(int num, char dir){
	printf("\x1B[%u%c", num, dir);
}

/*
 * Move the cursor to anywhere of the screen
 * h = horizontal position
 * v = vertical position
 */
void moveCursorAbsolute(int h, int v){
	printf("\x1B[%u;%uH", h, v);
}

/*
 * Moves 'num' lines up/down, and set cursor at the beginning
 * num = number of lines to move
 * dir = direction to move (use defines ANSI_LINE_UP/ANSI_LINE_DOWN
 */
void moveLine(int num, char dir){
	printf("\x1B[%u%c", num, dir);
}

/*
 * Select Graphic Rendition (SGR)
 * Accept 1 value
 */
void SGR1(int val1){
	printf("\x1B[%um", val1);
}

/*
 * Select Graphic Rendition (SGR)
 * Accept 2 values
 */
void SGR2(int val1, val2){
	printf("\x1B[%u;%um", val1, val2);
}

/*
 * Select Graphic Rendition (SGR)
 * Accept 3 values
 */
void SGR3(int val1, val2, val3){
	printf("\x1B[%u;%u;%um", val1, val2, val3);
}

/*
 * Reset attributes, clear screen and go top/left
 */
void ClsScr(void){
	printf(ANSI_RESET_ATTR);
	printf(ANSI_CLS);
	printf(ANSI_HOME);
}