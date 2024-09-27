#include<iostream>
using namespace std;

void tpChecker(int people,int roll);

main()
{
	int people,roll;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of tp: ";
	cin>>roll;
	tpChecker(people,roll);
}


void tpChecker(int people,int roll)
{
	int stayDays=14;
	int tissueIn1Roll=500;
	int averageUsePerDay=57;

	int totalTissues,tissuePerPeople,days;

	totalTissues=roll*tissueIn1Roll;
	tissuePerPeople=totalTissues/people;
	days=tissuePerPeople/averageUsePerDay;
	

	if(days>=14)
	{
		cout<<"Your TP will last "<<days <<" days, no need to panic!";
	}
	if(days<14)	
	{
		cout<<"Your TP will only last "<<days <<" days,buy more!";
	}
}	
