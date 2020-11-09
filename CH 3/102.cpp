#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x=10,y=10;
	char ch;
	cout<<"Type enter to quit\n";
	while(ch!='\r')
	{
		cout<<"Your location is "<<x<<","<<y<<endl;
		cout<<"Press direction key (n,s,e,w): ";
		ch=getche();
		if(ch=='n')
		y--;
		else if(ch=='s')
		y++;
		else if(ch=='e')
		x++;
		else if(ch=='w')
		x--;
	}
	return 0;
}
