#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int word=1;
	int letter=0;
	char ch='a';
	cout<<"Enter a phrase : ";
	while(ch!='\r')
	{
		ch=getche();
		if(ch==' ')
		word++;
		else
		letter++;
	}
	cout<<"Words = "<<word<<endl;
	cout<<"Letters = "<<(letter-1);
	return 0;
}
