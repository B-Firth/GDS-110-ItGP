/*
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
#include<time.h>
#include<conio.h>
using namespace std;
void goto_xy(int c, int r);
void horizontal(int sc, int sr, int wd);
void vertical(int sc, int sr, int ht);
void corners(int sc, int sr, int wd, int ht);
void clearConsolePrompts();
void horizontal1(int sc, int sr, int wd);
int positionBox(int sc, int sr, int wd, int ht, int upper, int lower);
int main()
{
	srand(time(NULL));
	char box = (char)220, move, moveRight;
	int height, width, scol, srow, blockCol, blockRow, c, r, right,
		left, col, row, top, bottom;
	scol = 10; //start column
	srow = 5; // start row
	width = 30;
	height = 20;
	right = scol + width - 1;
	left = srow + 1;
	top = srow + 1;
	bottom = srow + height - 1;
	col = positionBox(scol, srow, width, height, right, left);
	row = positionBox(scol, srow, width, height, bottom, top);
	clearConsolePrompts();
	horizontal1(8, 10, 34);
	horizontal(scol, srow, width);  // top horizontal border
	vertical(scol, srow, height); // left vertical border
	horizontal(scol, srow + height, width);
	vertical(scol + width, srow, height);
	corners(scol, srow, width, height);
	
	col = positionBox(scol, srow, width, height, right, left);
	row = positionBox(scol, srow, width, height, bottom, top);
	goto_xy(col, row); cout << box;
	move = _getch();
	move = toupper(move);
	while ( move == 'A' || move == 'D')
	{
		switch (move)
		{
		case 'A':
			if (col <= scol + 1)
			{
				col = col + 1; horizontal1(8, 10, 34); cout << " "; horizontal1(8, 10, 34);
				horizontal(scol, srow, width);  // top horizontal border
				vertical(scol, srow, height); // left vertical border
				horizontal(scol, srow + height, width);
				vertical(scol + width, srow, height);
				corners(scol, srow, width, height);
	
			}
			else
			{
				col = col - 1; horizontal1(8, 10, 34); cout << " "; horizontal1(8, 10, 34);
				horizontal(scol, srow, width);  // top horizontal border
				vertical(scol, srow, height); // left vertical border
				horizontal(scol, srow + height, width);
				vertical(scol + width, srow, height);
				corners(scol, srow, width, height);
			
			}
			goto_xy(col + 1, row); cout << " ";
			goto_xy(col, row); cout << box;
			goto_xy(col, row);
			break;

		case 'D':
			if (col >= scol + width - 1)
			{
				col = col - 1; horizontal1(8, 10, 34); cout << " "; horizontal1(8, 10, 34);
				horizontal(scol, srow, width);  // top horizontal border
				vertical(scol, srow, height); // left vertical border
				horizontal(scol, srow + height, width);
				vertical(scol + width, srow, height);
				corners(scol, srow, width, height);
				
			}
			else
			{
				col = col + 1; horizontal1(8, 10, 34); cout << " "; horizontal1(8, 10, 34);
				horizontal(scol, srow, width);  // top horizontal border
				vertical(scol, srow, height); // left vertical border
				horizontal(scol, srow + height, width);
				vertical(scol + width, srow, height);
				corners(scol, srow, width, height);
			}
			goto_xy(col - 1, row); cout << " ";
			goto_xy(col, row); cout << box;
			goto_xy(col, row); cout << " ";
			break;
		
		}
		//goto_xy(col + 1, row); cout << " ";
		//goto_xy(col, row); cout << box;
		//goto_xy(col, row);
		move = _getch();
		move = toupper(move);
	}
	goto_xy(10, 35);
	system("pause");
}




void horizontal1(int sc, int sr, int wd)
{

	int c, r;
	char h = (char)196;
	for (c = 8; c <= sc + wd; c++)
	{
		goto_xy(c, 15);
		cout << h;
	}

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
	char lUC = (char)201, rUC = (char)187, lBC = (char)200, rBC =
		(char)188;
	goto_xy(sc, sr); cout << lUC;
	goto_xy(sc + wd, sr); cout << rUC;
	goto_xy(sc, sr + ht); cout << lBC;
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
	cout << " ";
		goto_xy(0, 1);
	cout << " ";
}
int positionBox(int sc, int sr, int wd, int ht, int upper, int lower)
{
	int  pos;
	pos = (10, 15);
	return pos;
}