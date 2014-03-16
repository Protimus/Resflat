/*****************************************************************************
*                                                                            *
*   Resistor Calculator                                                      *
*   Calculate the values according to the OHM Law and calculate resistance   *
*   of resistors according your color.                                       *
*                                                                            *
*   @author Rafael Pereira da Costa Gorges                                   *
*   @contributors Vinicius de Morais                                         *
*   @date 03/15/2014                                                         *
*                                                                            *
*****************************************************************************/

#include <iostream>
using namespace std;

void main() {

	int input, resistance, voltage, current;
	
	system("cls");
		cout<<"\n\n";
		cout<<"\t1. Calculate Current in Serie\n";
		cout<<"\t2. Calculate Voltage in Serie\n";
		cout<<"\t3. Calculate Resistance in Serie\n\n";
		cout<<"\t4. Calculate Current in Parallel\n";
		cout<<"\t5. Calculate Voltage in Parallel\n";
		cout<<"\t6. Calculate Resistance in Parallel\n\n";
		cout<<"\t7. Calculate Resistance by Resistor Color\n\n";
		cout<<"\t8. Quit\n\n\n";
		cout<<"\t Enter your choice =>  ";
		cin>>input;
		
	switch (input) {
	case 1:
		system("cls");
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
		system("cls");
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
		system("cls");
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
		system("cls");
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
		system("cls");
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
		system("cls");
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
		cout<"Quitting...\n";
		break;
	default:           
		cout<<"Error: bad input, quitting\n";
		break;
	}
	system ("PAUSE");
}
