#include<iostream>
using namespace std;
void starline()
{
	for(int a=0; a<45; a++)
	cout<<"*";
	cout<<endl;
}
int main()
{
	starline();
	cout<<"Data type        Range"<<endl;
	starline();
	cout<<"char             -128 to 127"<<endl;
	cout<<"short            -32,768 to 32,767"<<endl;
	cout<<"int              System dependent"<<endl;
	cout<<"long             -2,432,43,4324 to 2,343,4332"<<endl;
	starline();
	return 0;
}

