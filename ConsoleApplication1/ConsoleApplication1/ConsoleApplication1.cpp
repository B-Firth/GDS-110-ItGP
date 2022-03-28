/*
* Branden R. Firth
* Demo 1A 1-18-2022

*/




#include<iostream>
using namespace std;

int main()
{
	double hr, hw, gross;
	char anyMoreData;

	anyMoreData = 'Y'; // you need this to go into the loop the first time
	while (anyMoreData == 'Y')
	{

		cout << "Enter hours worked ";    // Prompt the user for hours worked
		cin >> hw;
		cout << "enter the hourly rate "; //Prompt the user for hourly rate
		cin >> hr;


		gross = hr * hw;

		cout << endl;
		cout << "You worked " << hr << " hours and your hourly rate is $" << hr << endl << endl;
		cout << "Your gross pay is: $" << gross << endl;

		cout << endl;
		cout << "Do you want to enter more data? "; // See if the user wishes to enter more data
		cin >> anyMoreData;
	}

	cout << "Program has finished." << endl << endl;

	system("pause");



}
