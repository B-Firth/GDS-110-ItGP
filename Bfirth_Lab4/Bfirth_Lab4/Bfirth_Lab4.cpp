/*
Author: Branden R.Firth
Lab Num : Lab4
CPP file name : Firth_Lab4.cpp

Variables used :

iRate			intrest rate
numYrs			number of years
numMon			number of months
beBal			beginning balance
enBal			ending balance
mInt			monthly interest
monDepo			monthly deposit
timer			counter for the months passed



*/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	//Making the decials only go to two places
	cout << fixed << setprecision(2);

	//Initializing Variables
	double iRate, beBal, enBal, mInt, monDepo;
	int numYrs, numMon, time = 0;
	char cont;

	//Prompt user to input data to start the process
	cont = 'Y'; //Setting cont to Y to enter and start the loop

	while (cont == 'Y' || cont == 'y')
	{
		//Prompt user to enter their beginning balance, vaildate input is within proper range
		cout << "User, enter your beginning balance (must be greater than $10). $";
		cin >> beBal;

			// error message displaying that the user is outside the necessary range
			while (beBal < 10) 
			{
				cout << "ERROR - Please enter a vaild number! Your beginning balance must be greater than $10." << endl; 
				cout << "Enter your beginning balance (must be greater than $10). $";
				cin >> beBal;
				
			}
		
		//Prompt user to enter the number of years, vaildate input is within proper range
		cout << "User, enter the number of year you would like to simulate. (must be greater than 10, but also 50 years or less). " ;
		cin >> numYrs;

			//error message displaying...
			while (numYrs < 10 || numYrs > 50)
			{
				cout << "ERROR - Please enter a vaild number! Years must be greater than ten, but also 50 years or less. " << endl;
				cout << "Enter the years you would like to simulate (must be greater than 10 and 50 or less). ";
				cin >> numYrs;
			}

		//Prompt user to enter the amount they would like to deposit monthly, vaildate input is within proper range
			cout << "User, enter the amount you would like to deposite monthly. (Must be greater than $10, but also $100 or less. $";
		cin >> monDepo;
			
			//error message displaying...
			while (monDepo < 10 || monDepo > 100)
			{
				cout << "ERROR - Please enter a vaild number! Your monthly deposite must be greater than $10 as well as less than $100." << endl;
				cout << "Enter your beginning balance (must be greater than $10, but also $100 or less).  $";
				cin >> monDepo;
			}

		//Prompt user to enter the intrest rate they would like to set to the account
		cout << "User, enter the intrest rate you would like to set for you account. The input must be between 3% and 7% ( input 7 = 7%). ";
		cin >> iRate;

			//Error message displaying...
			while (iRate < 3 || iRate > 7)
			{
				cout << "ERROR - Please enter a vaild number! Your intrest must be 3% or greater, but also 7% or less. " << endl;
				cout << "Enter your intrest rate, must be between 3% and 7% (input 4 = 4%).  " << endl;
				cout << endl;
				cin >> iRate;
				cout << endl << endl;

			}

			//convtering years into months, so timer loop can function properly
			numMon = numYrs * 12;

			iRate = iRate / 100;

			//formating of the table columns
			cout << setw(35) << "Beginning Balance" << setw(35) << "Monthly Interest" << setw(35) <<  "End Balance" << endl;

			while (time <= numMon)
			{
				mInt = beBal * iRate / 12;
				enBal = beBal + mInt + monDepo;
				beBal = enBal;
				time++;
				
				cout << setw(35) << beBal << setw(35) << mInt << setw(35) << enBal << endl;


			}

			cout << "Would you like to contiue and add new data? (Y / N) "; //Ask the user if they wold like to repeat the process
			cin >> cont;
			cout << endl;



	}

	cout << "User, this Program has Finsished." << endl;
	system("pause");

}

