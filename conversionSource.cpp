#include "interface.h"
int main()
{
	short selection = 0;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Will continue to loop everytime the user tells the program to keep running
	do
	{
		cout << "Select What You Would Want The Program To Do: " << endl;
		cout << "(1) Convert from feet and inches to meters and centimetes" << endl;
		cout << "(2) Converts from meters and centimeters to feet and inches" << endl;
		cout << "(3) Quit the program" << endl;
		cin >> selection;

		 system("CLS");
		switch (selection)
		{
		case (1):
			Eng2Metric();
			break;
		case (2):
			Metric2Eng();
			break;
		case (3):
			cout << "Closing the program" << endl;
			break;
		default:
			cout << "Invalid input" << endl;
		} //end switch

		system("pause");
	} while (selection != 3); // end do-while loop
	return 0;
}//end main

//Prompt the user to input information they wish to convert
void Eng2Metric()
{
	double inches = 0;
	double centimeters = 0;
	double meters = 0;
	double feet = 0;

	//Prompts the user to input feet and inches
	cout << "Enter feet: " << endl;
	cin >> feet;
	cout << "Enter inches: " << endl;
	cin >> inches;

	//meters and centimeters onversions 
	meters = feet * FEET_PER_METERS;
	centimeters = inches * CM_PER_INCH;

	//Outputs meters and centimeters as feet and inches
	cout << "Feet= " << meters << " meters" << endl;
	cout << "Inches= " << centimeters << " centimeters" << endl;
}

void Metric2Eng() {
	double inches = 0;
	double centimeters = 0;
	double meters = 0;
	double feet = 0;

	//Prompts the user to input meters and centimeters
	cout << "Enter meters: " << endl;
	cin >> meters;
	cout << "Enter centimeters: " << endl;
	cin >> centimeters;

	//feet and inches conversions
	feet = meters * FEET_PER_METERS;
	inches = centimeters * INCH_PER_CM;

	//Outputs feet and inches as meters and centimeters
	cout << "Meters= " << feet << " feet" << endl;
	cout << "Centimeters= " << inches << " inches" << endl;
}