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
#include <string>
#include <sstream>

#define MAX_RESISTORS 8	// Change this if you need use more than 8 resistors.
#define MAX_TOLERANCE 10	// Change this if you need use more than 10% of tolerance.

using namespace std;

/*****************************************************
* Class Resistor                                     *
* Get variables to use in resistor code calculation. *                   
*****************************************************/

class resistor {
	private:
		double resistance;
		double tolerance;
		int resmax[MAX_RESISTORS];
	public:
		resistor(double rL,double tL);
		~resistor();
		void StoreResistance(double rL);
		double getResistance();
		void StoreTolerance (double tL);
		double getTolerance();
		resistor(); 
};

/****************************************************
* Initializations                                   *
* This is the main of program                       *
****************************************************/

int main() {	
	system("PAUSE");
	return 0;	
}