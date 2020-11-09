#include<iostream>
#include<iomanip>
using namespace std;
struct employee
{
	int number;
	float compensation;
};
int main()
{
	employee e1,e2,e3;
	cout<<"Enter employee: ";
	cin>>e1.number;
	cout<<"Enter compensation: ";
	cin>>e1.compensation;
	cout<<"Enter employee: ";
	cin>>e2.number;
	cout<<"Enter compensation: ";
	cin>>e2.compensation;
	cout<<"Enter employee: ";
	cin>>e3.number;
	cout<<"Enter compensation: ";
	cin>>e3.compensation;
	
	cout<<setw(23)<<"Employee number "<<setw(22)<<"Compensation"<<endl;
	cout<<setw(15)<<e1.number<<setw(25)<<e1.compensation<<endl;
	cout<<setw(15)<<e2.number<<setw(25)<<e2.compensation<<endl;
	cout<<setw(15)<<e3.number<<setw(25)<<e3.compensation;
	return 0;
}
