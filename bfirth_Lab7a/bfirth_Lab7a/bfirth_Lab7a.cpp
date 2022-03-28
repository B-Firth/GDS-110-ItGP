/*
Author: Branden R. Firth
LabNum: 7A
fileName: bfirth_Lab7a


*/

#include<iostream>
#include<windows.h>
using namespace std;


void goto_xy(int c, int r);
int mainMenu();
int add();
int sub();
void mult(int tnum1, int num2);
int divi();
void pause();
int main()
{
	int answer, userSelection, tnum1, tnum2;
	userSelection = 0;
	while (userSelection != 5)
	{
		userSelection = mainMenu();
		switch (userSelection)
		{
		case 1:
			answer = add();
			goto_xy(40, 11); cout << "The answer is " << answer;
				pause();
			system("cls");
			break;

		case 2:
			answer = sub();
			goto_xy(40, 11); cout << "The answer is " << answer;
				pause();
			system("cls");
			break;

		case 3:
			system("cls");
			goto_xy(40, 11); cout << "Enter a number: ";
			cin >> tnum1;
			goto_xy(40, 12); cout << "Enter s second number: ";
			cin >> tnum2;
			mult(tnum1, tnum2);
			pause();
			system("cls");
			break;

		case 4:
			answer = divi();
			goto_xy(40, 11); cout << "The answer is " << answer;
			pause();
			system("cls");
			break;

		case 5:
			system("cls");
			goto_xy(40, 11); cout << "EXIT selected...";
			goto_xy(40, 12); cout << "Program has finished... ";
			goto_xy(40, 13); cout << "(Press enter/return twice or close this window) ";
		}
	}
	goto_xy(40, 30); system("pause");
}
void goto_xy(int c, int r)
{
	COORD coord;
	coord.X = c;
	coord.Y = r;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	return;
}
int mainMenu()
{
	int selection;
	goto_xy(40, 14); cout << "                                  ";
	goto_xy(40, 6); cout << "My Basic Calculator";
	goto_xy(40, 8); cout << "1. Add two numbers";
	goto_xy(40, 9); cout << "2. Subtract two numbers";
	goto_xy(40, 10); cout << "3. Multiply two numbers";
	goto_xy(40, 11); cout << "4. Divide two numbers";
	goto_xy(40, 12); cout << "5. EXIT";
	goto_xy(40, 14); cout << "Please enter your selection ... ";
	cin >> selection;
	return selection;
}
int add()
{
	int ans, num1, num2;
	system("cls");
	goto_xy(40, 8); cout << "Enter a number to add ... ";
	cin >> num1;
	goto_xy(40, 9); cout << "Enter another number to add ... ";
	cin >> num2;
	ans = num1 + num2;
	return ans;
}
int sub()
{
	int ans, num1, num2;
	system("cls");
	goto_xy(40, 8); cout << "Enter a number ... ";
	cin >> num1;
	goto_xy(40, 9); cout << "Enter another number to subtract from the first number  ... ";
		cin >> num2;
	ans = num1 - num2;
	return ans;
}


void mult(int tnum1, int tnum2) 
{
	int ans;
	ans = tnum1 * tnum2;
	cout << ans;
}

int divi()
{
	int ans, num1, num2;
	system("cls");
	goto_xy(40, 8); cout << "Enter a number ... ";
	cin >> num1;
	goto_xy(40, 9); cout << "Enter another number to divide the first number by ... ";
	cin >> num2;
	ans = num1 / num2;
	return ans;
}
void pause()
{
	char ret;
	goto_xy(40, 14); cout << "Please ress any key and then enter/return to continue ... ";
	cin >> ret;
}