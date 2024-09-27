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
	system("cls");
	printH();
	gotoxy(0,1);
	printA();
	gotoxy(0,2);
	printS();
	gotoxy(0,3);
	printS();
	gotoxy(0,4);
	printA();
	gotoxy(0,5);
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
