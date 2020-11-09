#include<iostream>
using namespace std;
struct date
{
	int day,month,year;
};
int main()
{
	date x;
	char c;
	cout<<"Enter the date: ";
	cin>>x.day>>c>>x.month>>c>>x.year;
	cout<<"The date is "<<x.day<<c<<x.month<<c<<x.year;
	return 0;
}
