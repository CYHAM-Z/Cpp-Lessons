#include<iostream>
using namespace std;
int main()
{
	const long limit= 100000000;
	long next = 0;
	long last = 1;
	while(next<limit/2)
	{
		cout<<last<<" ";
		long sum=last+next;
		next=last;
		last=sum;
	}
	return 0;
}
