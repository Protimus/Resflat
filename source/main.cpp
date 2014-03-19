/*****************************************************************************
*                                                                            *
*   Resistor Calculator                                                      *
*   Calculate the values according to the OHM Law and calculate resistance   *
*   of resistors according your color.                                       *
*                                                                            *
*   @author Rafael Pereira da Costa Gorges                                   *
*   @contributors Vinicius de Morais                                         *
*   @file main.cpp                                                           *
*   @date 03/15/2014                                                         *
*                                                                            *
*****************************************************************************/

#include <iostream>
#include "console.hpp"
#ifdef _WIN32
	#define CLEAN "cls"
#else
	#define CLEAN "clear"
#endif

using namespace std;

/// Shows the console message.
/*void console_display_title() {
	Console::Message(""BG_WHITE"         (=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=)"CONSOLE""NORMAL"\n");
	Console::Message(""BG_CYAN"          ("WHITE"  ______    _______  _______  _______  ___      _______  _______ "BG_CYAN""CONSOLE")"NORMAL"\n");
	Console::Message(""BG_CYAN"          ("WHITE" |    _ |  |       ||       ||       ||   |    |   _   ||       | "BG_CYAN")"CONSOLE""NORMAL"\n");
	Console::Message(""BG_CYAN"          ("WHITE" |   | ||  |    ___||  _____||    ___||   |    |  |_|  ||_     _| "BG_CYAN")"CONSOLE""NORMAL"\n");
	Console::Message(""BG_CYAN"          ("WHITE" |   |_||_ |   |___ | |_____ |   |___ |   |    |       |  |   |   "BG_CYAN")"CONSOLE""NORMAL"\n");
	Console::Message(""BG_CYAN"          ("WHITE" |    __  ||    ___||_____  ||    ___||   |___ |       |  |   |   "BG_CYAN")"CONSOLE""NORMAL"\n");
	Console::Message(""BG_CYAN"          ("WHITE" |   |  | ||   |___  _____| ||   |    |       ||   _   |  |   |   "BG_CYAN")"CONSOLE""NORMAL"\n");
	Console::Message(""BG_CYAN"          ("WHITE" |___|  |_||_______||_______||___|    |_______||__| |__|  |___|   "BG_CYAN")"CONSOLE""NORMAL"\n");
	Console::Message(""BG_WHITE"         (=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=)"CONSOLE""NORMAL"\n\n");
}*/

/// The core function of program.
void main() {

	//console_display_title();
	int input, resistance, voltage, current;
	
	system(CLEAN);
		cout<<"\n\n";
		cout<<"\t1. Calculate Current in Serie\n";
		cout<<"\t2. Calculate Voltage in Serie\n";
		cout<<"\t3. Calculate Resistance in Serie\n\n";
		cout<<"\t4. Calculate Current in Parallel\n";
		cout<<"\t5. Calculate Voltage in Parallel\n";
		cout<<"\t6. Calculate Resistance in Parallel\n\n";
		cout<<"\t7. Calculate Resistance by Resistor Colour\n\n";
		cout<<"\t8. Quit\n\n\n";
		cout<<"\t Enter your choice =>  ";
		cin>>input;
		
	switch (input) {
	case 1:
		system(CLEAN);
		cout<<"\n\n\n";
		cout<<"\tEnter Voltage => ";
		cin>>voltage;
		cout<<"\tEnter Resistance => ";
		cin>>resistance;
		current = voltage/resistance;
		cout<<"\n\n";
		cout<<" Current = "<< current <<".";
		cout<<"\n\n\n\n";
		break;
	case 2:
		system(CLEAN);
		cout<<"\n\n\n";
		cout<<"\tEnter Current => ";
		cin>>current;
		cout<<"\tEnter Resistance => ";
		cin>>resistance;
		voltage = resistance*current;
		cout<<"\n\n";
		cout<<" Voltage = "<< voltage <<".";
		cout<<"\n\n\n\n";
		break;
	case 3:
		system(CLEAN);
		cout<<"\n\n\n";
		cout<<"\tEnter Current => ";
		cin>>current;
		cout<<"\tEnter Voltage => ";
		cin>>voltage;
		resistance = voltage/current;
		cout<<"\n\n";
		cout<<" Resistance = "<< resistance <<".";
		cout<<"\n\n\n\n";
		break;
	case 4:
		system(CLEAN);
		cout<<"\n\n\n";
		cout<<"\tEnter Current => ";
		cin>>current;
		cout<<"\tEnter Voltage => ";
		cin>>voltage;
		// OHM Formula to Parallel
		cout<<"\n\n";
		cout<<" Resistance = "<< resistance <<".";
		cout<<"\n\n\n\n";
		break;
	case 5:
		system(CLEAN);
		cout<<"\n\n\n";
		cout<<"\tEnter Current => ";
		cin>>current;
		cout<<"\tEnter Voltage => ";
		cin>>voltage;
		// OHM Formula to Parallel
		cout<<"\n\n";
		cout<<" Resistance = "<< resistance <<".";
		cout<<"\n\n\n\n";
		break;
	case 6:
		system(CLEAN);
		cout<<"\n\n\n";
		cout<<"\tEnter Current => ";
		cin>>current;
		cout<<"\tEnter Voltage => ";
		cin>>voltage;
		// OHM Formula to Parallel
		cout<<"\n\n";
		cout<<" Resistance = "<< resistance <<".";
		cout<<"\n\n\n\n";
		break;
	case 7: // Need be coded - Resistor Color
		break;
	case 8:
		cout<<"Quitting...\n";
		break;
	default:           
		cout<<"Error: bad input, quitting\n";
	}
	system ("PAUSE");
}
