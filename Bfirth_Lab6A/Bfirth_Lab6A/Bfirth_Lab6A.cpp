/*
Author/commentor: Branden R. Firth

Lab Num: Lab 6A

File Name: Bfirth_Lab6A.cpp
*/

#include<iostream>
#include<Windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
void goto_xy(int c, int r);
void horizontal(int sc, int sr, int wd);
void vertical(int sc, int sr, int ht);
void corners(int sc, int sr, int wd, int ht);
void midpoint(int midCol, int sr, int h);
void box();
void main()
{
	int height, width, scol, srow, blockCol, blockRow, c, r;
	scol = 10;
	srow = 2;
	width = 30;
	height = 30;
	goto_xy(17, 1); cout << "YAHTZEE GRID";
	horizontal(scol, srow, width); // Horizontal line capping the top of the Yahtzee Grid. The horizontal versions of the variables of scol, srow, and width
	vertical(scol, srow, height); //Vertical line on the left side of the Yahtzee Grid. The vertical versions of the variables of scol, srow, and height
	srow = srow + height; // controls the horizontal on the bottom of the Yatzee Grid srow assigned number of 2 adding the height variable 30 together to get the new assigned variable to srow
	horizontal(scol, srow, width); // Horizontal line capping the bottom of the Yahtzee Gride. The horizontal versions of the varibles of scol, srow, and width
	scol = scol + width;
	srow = 2;
	vertical(scol, srow, height); //Vertical line on the right side of the Yahtzee Grid
	scol = 10;
	srow = 2;
	corners(scol, srow, width, height);
	midpoint(25, srow, height);
	box();
	goto_xy(10, 33);
	system("pause");
}
void horizontal(int sc, int sr, int wd)
{
	int c, r;
	char h = (char)205; 
	/* ASCii 205 (Box Drawing Character) double parallel horizontial lines similar to an equal sign in appearence( = ).
	* Allows the Grid to appear as a double layer box on the horizontial planes (not the vertical sides)
	*/
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
	/* ASCii 186 (Box Drawing Character) double parallel vertical lines. Allows the Grid to appear as a double layer box on the vertical plains
	* (not on the horizontial lines)
	*/
	for (r = sr; r <= sr + ht; r++)
	{
		goto_xy(sc, r);
		cout << v;
	}
}
void corners(int sc, int sr, int wd, int ht)
{
	char lUC = (char)201, rUC = (char)187, lBC = (char)200, rBC =
		(char)188;
	/*
	luc 201:  left upper corner cap for the Yahtzee Grid (Box Drawing Charcter)
	rUC 187: right upper corner cap for the Yahtzee Grid (Box Drawing Character)
	lBC 200: left bottom corner cap for the Yahtzee Grid (Box Drawing Charcter)
	rBC 188: right bottom corner cap for the Yahtzee Grid (box Drawing Character)
	*/
	goto_xy(sc, sr); cout << lUC;		//Completes the top left corner of the Yahtzee Grid, having the cursor go to coor x = sc, y = sr
	goto_xy(sc, sr + ht); cout << lBC;	//completes the left bottom corner of the Yahtzee Grid, having the cursor go to coor x = sc, y = sr+ht
	goto_xy(sc + wd, sr); cout << rUC;	//completes the right upper corner of the Yahtzee Grid, having the cursor go to coor x = sc+wd, y = sr
	goto_xy(sc + wd, sr + ht); cout << rBC; // completes the right bottom corner of the Yahtzee Grid, having the cursor go to coor x = sc+wd, y = sr+ht 
}
void goto_xy(int c, int r)
{
	COORD coord;
	coord.X = c;
	coord.Y = r;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	return;
}
void midpoint(int mcol, int sr, int ht)
{
	int c, r;
	char v = (char)186;
	for (r = sr + 1; r <= sr + ht - 1; r++)
	{
		goto_xy(mcol, r);
		//cout << v;
	}
}
void box()
{
	char h = (char)196;
	char v = (char)179;
	char ulc = (char)218;
	char llc = (char)192;
	char lrc = (char)217;
	char urc = (char)191;
	int r;
	goto_xy(15, 3); cout << h << h << h << h << h << h;
	for (r = 4; r <= 6; r++)
	{
		goto_xy(15, r); cout << v;
	}
	goto_xy(15, 6); cout << h << h << h << h << h << h;
	for (r = 4; r <= 6; r++)
	{
		goto_xy(20, r); cout << v;
	}
	goto_xy(15, 6); cout << llc;
	goto_xy(15, 3); cout << ulc;
	goto_xy(20, 6); cout << lrc;
	goto_xy(20, 3); cout << urc;
	goto_xy(15, 7); cout << h << h << h << h << h << h;
	for (r = 7; r <= 9; r++)
	{
		goto_xy(15, r); cout << v;
	}
	goto_xy(15, 10); cout << h << h << h << h << h << h;
	for (r = 7; r <= 9; r++)
	{
		goto_xy(20, r); cout << v;
	}
	goto_xy(15, 7); cout << ulc;
	goto_xy(20, 7); cout << urc;
	goto_xy(15, 10); cout << llc;
	goto_xy(20, 10); cout << lrc;
}
