/*

Author: Branden R. Firth
Lab Num: Lab2B
CPP file name:  Firth2A.cpp
Variables used:

	hrs				Hours Worked - user inputed
	pRate			Pay Rate - user inputed
	gPay			Gross pay
	tBracket		Tax Bracket 

*/

#include<iostream>
using namespace std;

int main()
{
	//Initializing Variables
	double hrs, pRate, gPay, tBrack;
	char cont;

	//displaying all of the tax brackets
	cout << "$2500.00 or greater = 0.45" << endl;
	cout << "$2499.99 - $2000.00 = 0.40" << endl;
	cout << "$1999.99 - $1500.00 = 0.35" << endl;
	cout << "$1499.99 - $1000.00 = 0.30" << endl;
	cout << "$999.99 or less = .25" << endl << endl;


	cont = 'Y';
	while (cont == 'Y')
	{
		cout << "Please enter your hours worked (Must be more then 0 and 40 or less). " << endl; // Prompt the user for hours worked
		cin >> hrs;

		while (1 > hrs || hrs > 40)
		{
			cout << "ERROR - Please enter a vaild number, Hours must be 0-40!" << endl; // error message displaying that the user is outside the necessary range
			cout << "Please enter your hours worked (0-40). " << endl;
			cin >> hrs;
		}

		cout << "Enter hourly rate (Must be more then 0 and 100 or less) "; // Prompt the user for hourly rate
		cin >> pRate;

		while (1 > pRate || pRate > 100)
		{
			cout << "ERROR - Please enter a vaild number, Pay must be 0-100)" << endl; // error message displaying that the user is outside the necessary range
			cout << "please enter your Hourly rate (Must be (0-100)" << endl;
			cin >> pRate;
		}

		gPay = hrs * pRate; // calculate the gross pay to determine the tax bracket of the user / entered infomation
		cout << "With the infomation provided, your gross pay is $" << gPay << endl;

		//Below are the individual tax brackets that can be display, if statements used to out put the correct tax bracket
		if (gPay >= 2500.00)
		{
			tBrack = 0.45;
		}

		if (gPay < 2500)
		{
			tBrack = 0.40;
		}

		if (gPay < 2000)
		{
			tBrack = 0.35;
		}

		if (gPay < 1500)
		{
			tBrack = 0.30;
		}

		if (gPay < 1000)
		{
			tBrack = 0.25;
		}

		cout << "Tax Rate: " << tBrack << endl << endl;
		cout << "Would you like to contiue and add new data? (Y / N) "; //Ask the user if they wold like to repeat the process
		cin >> cont;
		cout << endl;

	}
			cout << "This program has finished." << endl << endl;
			system("pause");
		
}
