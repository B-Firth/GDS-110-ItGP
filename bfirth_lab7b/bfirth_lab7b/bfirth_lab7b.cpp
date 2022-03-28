/*
Name: Branden R. Firth

LabNum: 7B

Filename: bfirth_lab7b.cpp

Double Lines
l =   (char) 205 horizontal line
lUC = (char) 201 left upper corner
rUC = (char) 187 right upper corner
v =   (char) 186 verticle line
lBC = (char) 200 bottom left corner
rBC = (char) 188 bottom rihgt corner
*/
#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

void goto_xy(int c, int r);
void horizontal(int sc, int sr, int wd);
void vertical(int sc, int sr, int ht);
void corners(int sc, int sr, int wd, int ht);
void clearConsolePrompts();
void main()
{
	int height, width, scol, srow, blockCol, blockRow, c, r;
	scol = 10; //start column
	srow = 5; // start row
	width = 20;
	height = 15;

	/*cout << "Enter the width for the grid: ";
	cin >> width;
	cout << "Enter the height of the grid: ";
	cin >> height;*/

	clearConsolePrompts();
	horizontal(scol, srow, width);  // top horizontal border
	horizontal(scol, srow+height, width);
	vertical(scol, srow, height); // left vertical border
	vertical(scol + width, srow, height);
	corners(scol, srow, width, height);
	
	goto_xy(10, 35);
	system("pause");
}
void horizontal(int sc, int sr, int wd)
{
	int c, r;
	char h = (char)205; // double horizontal line
	for (c = sc; c <= sc + wd; c++)
	{
		goto_xy(c, sr);
		cout << h;
	}
	
}
void vertical(int sc, int sr, int ht)
{
	int c, r;
	char v = (char)186;
	for (r = sr; r <= sr + ht; r++)
	{
		goto_xy(sc, r);
		cout << v;
	}
}
void corners(int sc, int sr, int wd, int ht)
{
	char lUC = (char)201, rUC = (char)187, lBC = (char)200, rBC = (char)188;
	goto_xy(sc, sr); cout << lUC;
	goto_xy(sc, sr + ht); cout << lBC;
	goto_xy(sc + wd, sr); cout << rUC;
	goto_xy(sc + wd, sr + ht); cout << rBC;
}
void goto_xy(int c, int r)
{
	COORD coord;
	coord.X = c;
	coord.Y = r;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	return;
}
void clearConsolePrompts()
{
	goto_xy(0, 0);
	cout << "";
		goto_xy(0, 1);
	cout << "";
}


