#include<iostream>
using namespace std;
int main()
{
	int years;
	float amount,rate;
	cout<<"Enter initial amount : ";
	cin>>amount;
	cout<<"Enter number of years : ";
	cin>>years;
	cout<<"Enter interest rate : ";
	cin>>rate;
	for(int a=0; a<years; a++)
	{
		amount+=amount*rate/100;
	}
	cout<<"At the end of "<<years<<" years,"<<" you will have "<<amount<<" dollars.";
	return 0;
	
}
