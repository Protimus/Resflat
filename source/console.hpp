/*****************************************************************************
*                                                                            *
*   Resistor Calculator                                                      *
*   Calculate the values according to the OHM Law and calculate resistance   *
*   of resistors according your color.                                       *
*                                                                            *
*   @author Rafael Pereira da Costa Gorges                                   *
*   @contributors Vinicius de Morais                                         *
*   @file console.hpp                                                        *
*   @date 03/15/2014                                                         *
*                                                                            *
*****************************************************************************/

#pragma once
/// Color definitions to be used in background of ASCII Art.
#define BG_CYAN		"\033[46m"
#define BG_WHITE		"\033[47m"
#define CONSOLE		"\033[K"
#define NORMAL	RESET

extern void console_display_title();

/// Class to print the console messages.
class Console {
	public:	
		static int Message(const char *, ...);
};