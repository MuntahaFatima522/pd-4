#include<iostream>
#include<windows.h>
using namespace std;

void printH();
void printA();
void printS();
void printN();
void gotoxy(int x,int y);

main()
{
	int x=0,y=1;
	system("cls");
	printH();
	gotoxy(x,y);
	printA();
	y=y+1;
	gotoxy(x,y);
	printS();
	y=y+1;
	gotoxy(x,y);
	printS();
	y=y+1;
	gotoxy(x,y);
	printA();
	y=y+1;
	gotoxy(x,y);
	printN();
}


void printH()
{
	cout<<"H";
}


void printA()
{
	cout<<"A";
}


void printS()
{	
	cout<<"S";
}


void printN()
{
	cout<<"N";
}



void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
