#include<iostream>
using namespace std;

void flowerShop(int redRose,int whiteRose,int tulip);

main()
{
	int redRose,whiteRose,tulip;
	cout<<"Red Rose: ";
	cin>>redRose;
	cout<<"White Rose: ";
	cin>>whiteRose;
	cout<<"Tulips: ";
	cin>>tulip;
	flowerShop(redRose,whiteRose,tulip);
}


void flowerShop(int redRose,int whiteRose,int tulip)
{
	float OneRedRosePrice=2.00;
	float OneWhiteRosePrice=4.10;
	float OneTulipPrice=2.50;

	float TotalRedRosePrice,TotalWhiteRosePrice,TotalTulipPrice,originalPrice,Discount,FinalPrice;

	TotalRedRosePrice=OneRedRosePrice*redRose;

	TotalWhiteRosePrice=OneWhiteRosePrice*whiteRose;

	TotalTulipPrice=OneTulipPrice*tulip;

	originalPrice=TotalRedRosePrice+TotalWhiteRosePrice+TotalTulipPrice;

	if (originalPrice>200)
	{
		Discount=0.2*originalPrice;
		FinalPrice=originalPrice-Discount;
		cout<<"Original Price: $"<<originalPrice<<endl;
		cout<<"Price after discount: $"<<FinalPrice;
	}
	if (originalPrice<=200)
	{
		cout<<"Original Price: $"<<originalPrice<<endl;
		cout<<"No discount applied";
	}
}
		
		