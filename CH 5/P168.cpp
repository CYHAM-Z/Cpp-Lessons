#include<iostream>
using namespace std;
void repchar(char ch, int a);
int main()
{
	repchar('-',47);
	cout<<"Data type        Range"<<endl;
	repchar('=',23);
	cout<<"char             -128 to 127"<<endl;
	cout<<"short            -32,768 to 32,767"<<endl;
	cout<<"int              System dependent"<<endl;
	cout<<"long             -2,432,43,4324 to 2,343,4332"<<endl;
	repchar('-',47);
	return 0;
}
void repchar(char ch, int a)
{
	for(int b=0; b<a; b++)
	cout<<ch;
	cout<<endl;
}
