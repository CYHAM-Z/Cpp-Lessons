#include<iostream>
using namespace std;
struct times
{
	int hours,minutes,seconds;
};
int main()
{
	times t1,t2,t3;
	long totalsecs;
	char c;
	cout<<"Enter first time : ";
	cin>>t1.hours>>c>>t1.minutes>>c>>t1.seconds;
	cout<<"Enter second time : ";
	cin>>t2.hours>>c>>t2.minutes>>c>>t2.seconds;
	totalsecs = t1.hours*3600+t1.minutes*60+t1.seconds+t2.hours*3600+t2.minutes*60+t2.seconds;
	t3.seconds=totalsecs%60;
	t3.minutes=((totalsecs-t3.seconds)%3600)/60;
	t3.hours=totalsecs/3600;
	cout<<"The result is "<<t3.hours<<":"<<t3.minutes<<":"<<t3.seconds; 
	return 0;
}



