#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printM();
void printU();
void printN();
void printT();
void printA();
void printH();

main()
{
	system("cls");
	gotoxy(45,25);
	cout<<" #   #    #   #    #   #    #####     #     #   #    #    "<<endl;
	gotoxy(45,26);
	cout<<" # # #    #   #    ##  #      #      # #    #   #   # #   "<<endl;
	gotoxy(45,27);
	cout<<" #   #    #   #    # # #      #      ###    #####   ###   "<<endl;
	gotoxy(45,28);
	cout<<" #   #    #   #    #  ##      #      # #    #   #   # #   "<<endl;
	gotoxy(45,29);
	cout<<" #   #    #####    #   #      #      # #    #   #   # #   "<<endl;
	gotoxy(0,50);
}




void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
