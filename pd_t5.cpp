#include<iostream>
using namespace std;

void possibleBonus(int yourPosition,int friendPosition);

main()
{
	int yourPosition,friendPosition;
	cout<<"Enter your position: ";
	cin>>yourPosition;
	cout<<"Enter your friend's position: ";
	cin>>friendPosition;
	possibleBonus(yourPosition,friendPosition);
}


void possibleBonus(int yourPosition,int friendPosition)
{
	if(yourPosition+6>=friendPosition)
	{
		cout<<"true";
	}
	if(yourPosition+6<friendPosition)
	{
		cout<<"false";
	}
}


