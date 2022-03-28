/*
Author: Branden R. Firth
Labnum: 6C
filename: bfirth_Lab6c


Double Lines
l =   (char) 205 horizontal line
lUC = (char) 201 left upper corner
rUC = (char) 187 right upper corner
v =   (char) 186 verticle line
lBC = (char) 200 bottom left corner
rBC = (char) 188 bottom rihgt corner
Single Lines
(char) 196 horizontal line
(char) 179 verticle line
(char) 191 right upper corner
(char) 218 left upper corner
(char) 192 left bottom corner
(char) 217  right bottom corner
(char) 219 box  To be placed in the center of the grid.
*/
#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
void goto_xy(int c, int r);
void horizontal(int sc, int sr, int wd);
void horizontal1(int sc, int sr, int wd);
void vertical(int sc, int sr, int ht);
void vertical1(int sc, int sr, int ht);
void corners(int sc, int sr, int wd, int ht);
void corners1(int sc, int sr, int wd, int ht);
void corners2(int sc, int sr, int wd, int ht);
void corners3(int sc, int sr, int wd, int ht);
void clearConsolePrompts();
void main()
{
	int height, width, scol, srow, blockCol, blockRow, c, r;
	scol = 10; //start column
	srow = 2; // start row
	cout << "Enter the width for the grid: ";
	cin >> width;
	cout << "Enter the height of the grid: ";
	cin >> height;
	clearConsolePrompts();
	horizontal(scol, srow, width);  // top horizontal border
	horizontal1(scol, srow, width);
	vertical(scol, srow, height); // left vertical border
	vertical1(scol, srow, height);
	corners(scol, srow, width, height);
	corners1(scol, srow, width, height);
	corners2(scol, srow, width, height);
	corners3(scol, srow, width, height);
	goto_xy(10, 35);
	system("pause");
}
void horizontal(int sc, int sr, int wd)
{
	int c, r;
	char h = (char)196; //  horizontal line
	for (c = sc; c <= sc + wd; c++)
	{
		goto_xy(c, sr);
		cout << h;
	}
}


void horizontal1(int sc, int sr, int wd)
{
	int c, r;
	char h = (char)196; //  horizontal line
	for (c = sc; c <= sc + wd; c++)
	{
		goto_xy(c, sr+wd);
		cout << h;
	}
}



void vertical(int sc, int sr, int ht)
{
	int c, r;
	char v = (char)179;
	for (r = sr; r <= sr + ht; r++)
	{
		goto_xy(sc, r);
		cout << v;
	}
}

void vertical1(int sc, int sr, int ht)
{
	int c, r;
	char v = (char)179;
	for (r = sr; r <= sr + ht; r++)
	{
		goto_xy(sc+ht, r);
		cout << v;
	}
}



void corners(int sc, int sr, int wd, int ht)
{
	char lUC = (char)218;
	goto_xy(sc, sr); cout << lUC;
}

void corners1(int sc, int sr, int wd, int ht)
{
	char lBC = (char)192;
	goto_xy(sc, sr+ht); cout << lBC;
}

void corners2(int sc, int sr, int wd, int ht)
{
	char rUC = (char)191;
	goto_xy(sc+wd, sr); cout << rUC;
}

void corners3(int sc, int sr, int wd, int ht)
{
	char rBC = (char)217;
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

