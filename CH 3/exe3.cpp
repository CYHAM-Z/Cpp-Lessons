#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	unsigned long total=0;
	char ch;
	cout<<"Enter a number : ";
	while((ch=getche())!='\r')
	{
		total=total*10+ch-'0';
	}
	cout<<"Number is : "<<total<<endl;
	getch();
	return 0;
	
}
