#include<iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name,float matricMarks,float interMarks, float ecatMarks);
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2);

main()
{
	string name;
	float matricMarks,interMarks,ecatMarks;

	string nameStd1, nameStd2;
	float ecatMarksStd1, ecatMarksStd2;

	int decision;

	printMenu();

	cout<<"Enter 1 to calculate aggreagate and 2 to compare marks: ";
	cin>>decision;

	if(decision==1)
	{
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter matric marks(out of 1100): ";
		cin>>matricMarks;
		cout<<"Enter inter marks(out of 550): ";
		cin>>interMarks;
		cout<<"Enter ecat marks(out of 400): ";
		cin>>ecatMarks;
		calculateAggregate(name,matricMarks,interMarks,ecatMarks);
	}

	else if(decision==2)
	{
		cout<<"Enter name of first student: ";
		cin>>nameStd1;
		cout<<"Enter ecat marks of first student: ";
		cin>>ecatMarksStd1;
		cout<<"Enter name of second student: ";
		cin>>nameStd2;
		cout<<"Enter ecat marks of second student: ";
		cin>>ecatMarksStd2;
		compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
	}
	
	else
	{
		cout<<"This option is not available.Enter 1 to calculate aggreagate and 2 to compare marks.";
	}
	
}


void printMenu()
{
	cout<<"               # #   ###   ###   # #   ###   ##    ##   ###   ###   # #      #   ##   # #   ###   ##   ##   ###   #   ###                   "<<endl;
	cout<<"               # #   # #    #    # #   #     # #  #      #     #    # #     # #  # #  ###    #   #    #      #   # #  # #                   "<<endl;
	cout<<"               # #   # #    #    # #   ###   ##    ##    #     #     #      ###  # #  ###    #    ##   ##    #   # #  # #                   "<<endl;
	cout<<"               # #   # #    #    # #   #     # #     #   #     #     #      # #  # #  # #    #      #    #   #   # #  # #                   "<<endl;
	cout<<"                #    # #   ###    #    ###   # #   ##   ###    #     #      # #  ##   # #   ###   ##   ##   ###   #   # #                   "<<endl;
	cout<<"                                                                                                                                            "<<endl;
	cout<<"                                                                                                                                            "<<endl;
	cout<<"   # #   #   ###   #    ##   ###   # #   ###   ###   ###       ##   # #   ##   ###   ###   # #       ####   #   ##      # #   ###   ###     "<<endl;
	cout<<"   ###  # #  # #  # #  #     #     ###   #     # #    #       #     # #  #      #    #     ###       #     # #  # #     # #   #      #      "<<endl;
	cout<<"   ###  ###  # #  ###  # #   ###   ###   ###   # #    #        ##    #    ##    #    ###   ###       ##    # #  ##      # #   ###    #      "<<endl;
	cout<<"   # #  # #  # #  # #  # #   #     # #   #     # #    #          #   #      #   #    #     # #       #     # #  # #     # #   #      #      "<<endl;
	cout<<"   # #  # #  # #  # #   ##   ###   # #   ###   # #    #        ##    #    ##    #    ###   # #       #      #   # #      #    ###    #      "<<endl;
	cout<<"                                                                                                                                            "<<endl;
	cout<<"                                                                                                                                            "<<endl;
	cout<<"                                                                                                                                            "<<endl;
	
}


void calculateAggregate(string name,float matricMarks,float interMarks, float ecatMarks)
{
	float matric_percent,inter_percent,ecat_percent;
	float aggregate;
	matric_percent=matricMarks/1100*100*0.3;
	inter_percent=interMarks/550*100*0.3;
	ecat_percent=ecatMarks/400*100*0.4;
	aggregate=matric_percent+inter_percent+ecat_percent;
	cout<<"Aggregate score for "<<name<<" in UET is: "<<aggregate<<"%";
}


void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2)
{
	if(ecatMarksStd1>ecatMarksStd2)
	{
		cout<<nameStd1 <<" will get roll#1 as he/she has maximum marks in ecat";
	}
	if(ecatMarksStd1<ecatMarksStd2)
	{
		cout<<nameStd2 <<" will get roll#1 as he/she has maximum marks in ecat";
	}
}

