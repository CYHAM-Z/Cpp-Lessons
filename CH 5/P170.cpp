#include<iostream>
using namespace std;
void repchar(char ch, int a);
int main()
{
	char chin;
	int nin;
	cout<<"Enter a character:  ";
	cin>>chin;
	cout<<"Enter a number of times to repeat it: ";
	cin>>nin;
	repchar(chin,nin);
	return 0;
}
void repchar(char ch, int a)
{
	for(int b=0; b<a; b++)
	cout<<ch;
	cout<<endl;
}

