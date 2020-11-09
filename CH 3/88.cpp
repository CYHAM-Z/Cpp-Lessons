#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int pw=1;
	int no=1;
	while(pw<100000)
	{
		cout<<setw(3)<<no<<setw(7)<<pw<<endl;
		++no;
		pw=no*no*no*no;
	}
	cout<<endl;
	return 0;
}
