#include<iostream>
using namespace std;
struct times
{
	int hours,minutes,seconds;
};
int main()
{
	times t1;
	long totalsecs;
	char c;
	cout<<"Enter  time value in hours,minutes and seconds : ";
	cin>>t1.hours>>c>>t1.minutes>>c>>t1.seconds;
	totalsecs = t1.hours*3600+t1.minutes*60+t1.seconds;
	cout<<"The total seconds is "<<totalsecs; 
	return 0;
}


