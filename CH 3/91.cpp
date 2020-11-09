#include<iostream>
using namespace std;
int main()
{
	int dividend,divisor;
	char ch;
	do
	{
		cout<<"Enter divident : ";
		cin>>dividend;
		cout<<"Enter divisor : ";
		cin>>divisor;
		cout<<"Quotient is "<<dividend/divisor<<", remainder is "<<dividend%divisor<<endl;
		cout<<"Do another? (y/n) : ";
		cin>>ch;
	}
	while(ch!='n');
	return 0;
}
