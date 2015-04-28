/*
 * input.h
 *
 * This module is licensed under the GNU General Public License
 * Version 2.  Please see the file "COPYING" in this directory for
 * more information about the GNU General Public License Version 2.
 *
 *     Copyright (C) 2015  Kevin Lamonte
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef __INPUT_H__
#define __INPUT_H__

/* Curses ----------------------------------------------------------------- */

#include "qcurses.h"

#define Q_COLOR_BLACK   COLOR_BLACK
#define Q_COLOR_RED     COLOR_RED
#define Q_COLOR_GREEN   COLOR_GREEN
#define Q_COLOR_BLUE    COLOR_BLUE
#define Q_COLOR_CYAN    COLOR_CYAN
#define Q_COLOR_MAGENTA COLOR_MAGENTA
#define Q_COLOR_YELLOW  COLOR_YELLOW
#define Q_COLOR_WHITE   COLOR_WHITE


#define Q_KEY_BREAK     KEY_BREAK
#define Q_KEY_DOWN      KEY_DOWN
#define Q_KEY_UP        KEY_UP
#define Q_KEY_LEFT      KEY_LEFT
#define Q_KEY_RIGHT     KEY_RIGHT
#define Q_KEY_HOME      KEY_HOME
#define Q_KEY_BACKSPACE KEY_BACKSPACE
#define Q_KEY_F0        KEY_F0
#define Q_KEY_DL        KEY_DL
#define Q_KEY_IL        KEY_IL
#define Q_KEY_DC        KEY_DC
#define Q_KEY_IC        KEY_IC
#define Q_KEY_EIC       KEY_EIC
#define Q_KEY_CLEAR     KEY_CLEAR
#define Q_KEY_EOS       KEY_EOS
#define Q_KEY_EOL       KEY_EOL
#define Q_KEY_SF        KEY_SF
#define Q_KEY_SR        KEY_SR
#define Q_KEY_NPAGE     KEY_NPAGE
#define Q_KEY_PPAGE     KEY_PPAGE
#define Q_KEY_STAB      KEY_STAB
#define Q_KEY_CTAB      KEY_CTAB
#define Q_KEY_CATAB     KEY_CATAB
#define Q_KEY_ENTER     KEY_ENTER
#define Q_KEY_SRESET    KEY_SRESET
#define Q_KEY_RESET     KEY_RESET
#define Q_KEY_PRINT     KEY_PRINT
#define Q_KEY_LL        KEY_LL
#define Q_KEY_ABORT     KEY_ABORT
#define Q_KEY_SHELP     KEY_SHELP
#define Q_KEY_LHELP     KEY_LHELP
#define Q_KEY_BTAB      KEY_BTAB
#define Q_KEY_BEG       KEY_BEG
#define Q_KEY_CANCEL    KEY_CANCEL
#define Q_KEY_CLOSE     KEY_CLOSE
#define Q_KEY_COMMAND   KEY_COMMAND
#define Q_KEY_COPY      KEY_COPY
#define Q_KEY_CREATE    KEY_CREATE
#define Q_KEY_END       KEY_END
#define Q_KEY_EXIT      KEY_EXIT
#define Q_KEY_FIND      KEY_FIND
#define Q_KEY_HELP      KEY_HELP
#define Q_KEY_MARK      KEY_MARK
#define Q_KEY_MESSAGE   KEY_MESSAGE
#define Q_KEY_MOVE      KEY_MOVE
#define Q_KEY_NEXT      KEY_NEXT
#define Q_KEY_OPEN      KEY_OPEN
#define Q_KEY_OPTIONS   KEY_OPTIONS
#define Q_KEY_PREVIOUS  KEY_PREVIOUS
#define Q_KEY_REDO      KEY_REDO
#define Q_KEY_REFERENCE KEY_REFERENCE
#define Q_KEY_REFRESH   KEY_REFRESH
#define Q_KEY_REPLACE   KEY_REPLACE
#define Q_KEY_RESTART   KEY_RESTART
#define Q_KEY_RESUME    KEY_RESUME
#define Q_KEY_SAVE      KEY_SAVE
#define Q_KEY_SBEG      KEY_SBEG
#define Q_KEY_SCANCEL   KEY_SCANCEL
#define Q_KEY_SCOMMAND  KEY_SCOMMAND
#define Q_KEY_SCOPY     KEY_SCOPY
#define Q_KEY_SCREATE   KEY_SCREATE
#define Q_KEY_SDC       KEY_SDC
#define Q_KEY_SDL       KEY_SDL
#define Q_KEY_SELECT    KEY_SELECT
#define Q_KEY_SEND      KEY_SEND
#define Q_KEY_SEOL      KEY_SEOL
#define Q_KEY_SEXIT     KEY_SEXIT
#define Q_KEY_SFIND     KEY_SFIND
#define Q_KEY_SHOME     KEY_SHOME
#define Q_KEY_SIC       KEY_SIC
#define Q_KEY_MOUSE     KEY_MOUSE
#define Q_KEY_SLEFT     KEY_SLEFT
#define Q_KEY_SRIGHT    KEY_SRIGHT
#define Q_KEY_SR        KEY_SR
#define Q_KEY_SF        KEY_SF

#define Q_KEY_SUSPEND   KEY_SUSPEND

#define Q_KEY_F(n)      (KEY_F0 + (n))

/* Number pad constants */
#define Q_KEY_PAD_MIN   Q_KEY_PAD0
#define Q_KEY_PAD0      0x1DEAD000
#define Q_KEY_PAD1      0x1DEAD001
#define Q_KEY_PAD2      0x1DEAD002
#define Q_KEY_PAD3      0x1DEAD003
#define Q_KEY_PAD4      0x1DEAD004
#define Q_KEY_PAD5      0x1DEAD005
#define Q_KEY_PAD6      0x1DEAD006
#define Q_KEY_PAD7      0x1DEAD007
#define Q_KEY_PAD8      0x1DEAD008
#define Q_KEY_PAD9      0x1DEAD009
#define Q_KEY_PAD_ENTER 0x1DEAD010
#define Q_KEY_PAD_SLASH 0x1DEAD011
#define Q_KEY_PAD_PLUS  0x1DEAD012
#define Q_KEY_PAD_MINUS 0x1DEAD013
#define Q_KEY_PAD_STAR  0x1DEAD014
#define Q_KEY_PAD_STOP  0x1DEAD015

/* Ncurses only defines these */
#define Q_KEY_A1        KEY_A1
#define Q_KEY_A3        KEY_A3
#define Q_KEY_B2        KEY_B2
#define Q_KEY_C1        KEY_C1
#define Q_KEY_C3        KEY_C3

#ifdef Q_PDCURSES
#define Q_KEY_A2        KEY_A2
#define Q_KEY_B1        KEY_B1
#define Q_KEY_B3        KEY_B3
#define Q_KEY_C2        KEY_C2
#define Q_KEY_PAD_MAX   Q_KEY_PAD_STOP
#else
#define Q_KEY_A2        0x1DEAD020
#define Q_KEY_B1        0x1DEAD021
#define Q_KEY_B3        0x1DEAD022
#define Q_KEY_C2        0x1DEAD023
#define Q_KEY_PAD_MAX   Q_KEY_C2
#endif


#define Q_A_NORMAL      A_NORMAL
#define Q_A_UNDERLINE   A_UNDERLINE
#define Q_A_REVERSE     A_REVERSE
#define Q_A_BLINK       A_BLINK
#define Q_A_BOLD        A_BOLD
#define Q_A_PROTECT     A_PROTECT
#define Q_A_DIM         A_DIM
#define Q_A_INVIS       A_INVIS
#define Q_A_ATTRIBUTES  A_ATTRIBUTES
#define Q_A_COLOR       A_COLOR

#define Q_ERR           ERR

/* Includes --------------------------------------------------------------- */

/* Defines ---------------------------------------------------------------- */

/* Globals ---------------------------------------------------------------- */

/* The current rendering color, stored in console.c */
extern attr_t q_current_color;

/* Functions -------------------------------------------------------------- */

/* Main keyboard input function */
extern void qodem_win_getch(void * window, int * keystroke, int * flags, const unsigned int usleep_time);

extern void qodem_getch(int * keystroke, int * flags, const unsigned int usleep_time);

extern void discarding_getch();
extern void set_blocking_input(Q_BOOL block);

extern int q_cursor_off();
extern int q_cursor_on();
extern int q_cursor(const int cursor);

extern int q_key_code_yes(int keystroke);

#endif /* __INPUT_H__ */
