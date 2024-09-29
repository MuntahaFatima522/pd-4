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
	gotoxy(0,1);
	printH();
	gotoxy(0,7);
	printA();
	gotoxy(0,13);
	printS();
	gotoxy(0,19);
	printS();
	gotoxy(0,25);
	printA();
	gotoxy(0,31);
	printN();
}


void printH()
{
	cout<<" #   #  "<<endl;
	cout<<" #   #  "<<endl;
	cout<<" #####  "<<endl;
	cout<<" #   #  "<<endl;
	cout<<" #   #  "<<endl;
}


void printA()
{
	cout<<"   #    "<<endl;
	cout<<" #   #  "<<endl;
	cout<<" #####  "<<endl;
	cout<<" #   #  "<<endl;
	cout<<" #   #  "<<endl;
}


void printS()
{	
	cout<<"  ###  "<<endl;
	cout<<" #     "<<endl;
	cout<<" #### "<<endl;
	cout<<"    #  "<<endl;
	cout<<" ###  "<<endl;
}


void printN()
{
	cout<<" #   #  "<<endl;
	cout<<" ##  #  "<<endl;
	cout<<" # # #  "<<endl;
	cout<<" #  ##  "<<endl;
	cout<<" #   #  "<<endl;
}



void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
