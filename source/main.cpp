/*****************************************************************************
*                                                                            *
*   Resistor Calculator                                                      *
*   Calculate the values on resistors and shows ur tolerance                 *
*                                                                            *
*   @author Rafael Pereira da Costa Gorges                                   *
*   @contributors Vinicius de Morais                                         *
*   @date 03/15/2014                                                         *
*                                                                            *
*   CHANGELOG:                                                               *
*   - Created the resistor class. [Rafael G]                                 *
*   - Created the main function to calculate the values. [Rafael G]          *
*   - Added some comments to the code. [Rafael G]                            *
*                                                                            *
*****************************************************************************/

#include <iostream>
using namespace std;

int current, voltage, resistance, option;

void select() {
	system("cls");
	do {
		cout<<"\n\n";
		cout<<"\t1. Calculate Current in Serie\n";
		cout<<"\t2. Calculate Voltage in Serie\n";
		cout<<"\t3. Calculate Resistance in Serie\n\n";
		cout<<"\t4. Calculate Current in Parallel\n";
		cout<<"\t5. Calculate Voltage in Parallel\n";
		cout<<"\t6. Calculate Resistance in Parallel\n\n";
		cout<<"\t7. Quit\n\n\n";
		cout<<"\t Enter your choice =>  ";
		cin>>option;
	} 
	while ((option < 0) && (option > 7));
		cout<<"\n\n This is a invalid option\n"; 
}

void calculate() {
	if (option == 1) {
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
	}
	if (option == 2) {
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
	}
	if (option == 3) {
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
	}
}

void main() {
	select();
	calculate();
	system ("PAUSE");
}