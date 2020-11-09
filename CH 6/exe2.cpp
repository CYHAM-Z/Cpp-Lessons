#include<iostream>
using namespace std;
class timee
{
private:
int hours,minutes,seconds;
public:
timee():hours(0),minutes(0),seconds(0)
{}
timee(int h,int m,int s):hours(h),minutes(m),seconds(s)
{}
void showtime()
{
	cout<<"The total time is = "<<hours<<":"<<minutes<<":"<<seconds;
}
void addtime(timee t1,timee t2)
{
	seconds=t1.seconds+t2.seconds;
	if(seconds>=60)
	{
		seconds-=60;
		minutes++;
	}
	
	minutes+=t1.minutes+t2.minutes;
	if(minutes>=60)
	{
		minutes-=60;
		hours++;
	}
	
	hours+=t1.hours+t2.hours;
}

};
int main()
{
	timee time1(3,32,54);
	timee time2(5,23,34);
	timee time3;
	time3.addtime(time1,time2);
	time3.showtime();
	return 0;
}
