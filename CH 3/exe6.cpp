#include<iostream>
using namespace std;
int main()
{
	int a;
	long fact;
	cout<<"Enter a number : ";
	cin>>a;
	while(a!=0)
	{
		fact=1;
		for(int b=a; b>0; b--)
		{
		fact*=b;
	}
		cout<<"Factorial is "<<fact<<endl;
		cout<<"Enter 0 to exit or any number to calculate."<<endl;
		cin>>a;
	}
	return 0;
	
}

