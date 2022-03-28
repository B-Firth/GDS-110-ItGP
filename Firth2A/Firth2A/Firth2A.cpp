/* Author: Branden R. Firth
CPP file name:  Firth2A.cpp
Variables used: 
	hrRate		which is being paid per Hour
	hrWrk		Hours Worked
	gPay		Gross Pay (money before taxes)
	nPay		Net Pay (money after taxes)
	tRate		Tax Rate
	tOut		Money being taken out of pay
	anyMoreData	if equals Y repeat the loop, if N then stop the loop

*/

#include<iostream>
using namespace std;

int main()
{
	double hrRate, hrWrk, gPay, nPay, tRate, tOut;
	char anyMoreData;

	anyMoreData = 'Y'; // Needed to allow program to enter the loop
	while (anyMoreData == 'Y')
	{
		cout << "Enter hours worked ";  // Prompt the user for hours worked
		cin >> hrWrk;

		cout << "Enter hourly rate "; // Prompt the user for hourly rate
		cin >> hrRate;

		cout << "Enter tax rate of your area (EX: 0.07 = 7%) "; //Prompt the user for the tax rate
		cin >> tRate;

		gPay = hrRate * hrWrk; //Calculates the gross pay

		tOut = gPay * tRate; //Calculate the money to be taken out of gross pay
		nPay = gPay - tOut; // calculate the Net pay



		cout << "You worked " << hrWrk << " hours and your hourly rate is $" << hrRate << endl << endl; //Display the hours worked and the Hourly rate to User

		cout << "$" << gPay << " is your gross pay." << endl; //Display the gross pay to the User
		cout << "$" << tOut << " is the amount of tax taken out. " << endl;
		cout << "$" << nPay << " Is your net pay. " << endl;



		cout << "Do you want to enter more data? (Y / N) "; // Ask if the user wants to enter more data
		cin >> anyMoreData;
		cout << endl;
	}
	cout << "This program has finished." << endl << endl;
	system("pause");
}