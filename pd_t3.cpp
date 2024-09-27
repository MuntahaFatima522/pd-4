#include<iostream>
using namespace std;

void FinalPrice(string country,float price);

main()
{
	string country;
	float price;
	while(true)
	{
		cout<<"Enter the country's name: ";
		cin>>country;
		cout<<"Enter the ticket price in dollars: $";
		cin>>price;
		FinalPrice(country,price);
	}
}


void FinalPrice(string country,float price)
{
	float discount,finalprice;
	if(country=="pakistan")
	{
		discount=0.05*price;
		finalprice=price-discount;
		cout<<"Final ticket price after discount: $"<<finalprice<<endl;
	}
	if(country=="ireland")
	{
		discount=0.1*price;
		finalprice=price-discount;
		cout<<"Final ticket price after discount: $"<<finalprice<<endl;
	}
	if(country=="india")
	{
		discount=0.2*price;
		finalprice=price-discount;
		cout<<"Final ticket price after discount: $"<<finalprice<<endl;
	}
	if(country=="england")
	{
		discount=0.3*price;
		finalprice=price-discount;
		cout<<"Final ticket price after discount: $"<<finalprice<<endl;
	}
	if(country=="canada")
	{
		discount=0.45*price;
		finalprice=price-discount;
		cout<<"Final ticket price after discount: $"<<finalprice<<endl;
	}
}




	