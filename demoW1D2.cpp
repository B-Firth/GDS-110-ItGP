#include<iostream>
using namespace std;

int main()
{

    double hoursWk, hourlyRate, taxRate;
    double  grossPay, tax, netPay;

    hoursWk = 40;
    hourlyRate = 15.50;
    taxRate = .15;

    grossPay = hoursWk * hourlyRate;
    tax = grossPay * taxRate;
    netPay = grossPay - tax;

    cout << "Gross Pay $" << grossPay << endl;
    cout << "Tax $" << tax << endl;
    cout << "Net Pay $" << netPay << endl;

    system("pause");


}