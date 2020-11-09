#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	for(int b=1; b<201; b++)
	{
	cout<<setw(5)<<a*b<<" ";
	if(b%10==0)
	cout<<endl;
}
	return 0;
}
