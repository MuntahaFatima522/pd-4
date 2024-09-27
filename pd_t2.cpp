#include<iostream>
using namespace std;

void Reverse(string condition);

main()
{
	string condition;
	cout<<"Enter condition('true' or 'false'): ";
	cin>>condition;
	Reverse(condition);
}


void Reverse(string condition)
{
	if(condition=="true")
	{
		cout<<"False";
	}
	if(condition=="false")
	{
		cout<<"True";
	}
}