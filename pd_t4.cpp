#include<iostream>
using namespace std;

void CheckSpeed(int speed);

main()
{
	int speed;
	cout<<"Speed: ";
	cin>>speed;
	CheckSpeed(speed);
}


void CheckSpeed(int speed)
{
	if(speed>100)
	{
		cout<<"Halt... YOU WILL BE CHALLENGED";
	}
	if(speed<=100)
	{
		cout<<"Perfect! You're going good";
	}
}
