#include<iostream>
using namespace std;

void pet(int holidays);

main()
{
	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);
}


void pet(int holidays)
{
	int norm=30000;
	int gameTimePerWorkingDay=63;
	int gameTimePerHoliday=127;

	int WorkingDays,TimeForGames,Difference;
	int hours,minutes;

	WorkingDays=365-holidays;
	TimeForGames=(WorkingDays*gameTimePerWorkingDay)+(holidays*gameTimePerHoliday);
	Difference=norm-TimeForGames;
	
	if(Difference>=0)
	{
		hours=Difference/60;
		minutes=Difference%60;
		cout<<"Tom sleeps well"<<endl;;
		cout<<hours<<" hours and "<<minutes <<" minutes less for play";
	}
	if(Difference<0)
	{
		hours=Difference/60;
		minutes=Difference%60;
		cout<<"Tom will run away"<<endl;;
		cout<<hours<<" hours and "<<minutes <<" minutes for play";
	}		
}

