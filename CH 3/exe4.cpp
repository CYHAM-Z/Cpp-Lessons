#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch,gg;
	do
	{
	cout<<"Enter first number , operator , second number : ";
	cin>>a>>ch>>b;
	switch(ch)
	{
		case '+':
		cout<<"Answer = "<<a+b;
		break;
		case '-':
		cout<<"Answer = "<<a-b;
		break;
		case '*':
		cout<<"Answer = "<<a*b;
		break;
		case '/':
		cout<<"Answer = "<<a/b;
		break;
		default:
		cout<<"Answer = "<<0;
	}
		cout<<"\nDo another (y/n)?";
		cin>>gg;
	}
	while(gg!='n');
	return 0;
}

