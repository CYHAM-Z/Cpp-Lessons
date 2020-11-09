#include<iostream>
using namespace std;
int main()
{
	float temp;
	int a;
	cout<<"Type 1 to convert Fahrenheit to Celsius,"<<endl;
	cout<<"Type 2 to convert  Celsius to Fahrenheit,"<<endl;
	cin>>a;
	if(a==1)
	{
		cout<<"Enter temperature in Fahrenheit : ";
		cin>>temp;
		cout<<"In Celsius is "<<5.0/9.0*(temp-32.0);
	}
	else if(a==2)
	{
		cout<<"Enter temperature in Celsius : ";
		cin>>temp;
		cout<<"In Fahrenheit is "<<9.0/5.0*temp+32.0;
	}
	return 0;
}
