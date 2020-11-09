#include<iostream>
using namespace std;
int main()
{
	int p1,s1,c1;
	int p2,s2,c2;
	char ch,gg;
	do
	{
		int p3=0;
		int s3=0;
		int c3=0;
		cout<<"Enter first amount : ";
		cin>>p1>>ch>>s1>>ch>>c1;
		cout<<"Enter second amount : ";
		cin>>p2>>ch>>s2>>ch>>c2;
		
		c3+=c1+c2;
		if(c3>11)
		{
			c3-=12;
			s3++;
		}
		s3+=s1+s2;
		if(s3>19)
		{
			s3-=20;
			p3++;
		}
		p3+=p1+p2;
		cout<<"Total is "<<p3<<ch<<s3<<ch<<c3<<endl;
		cout<<"Do you wish to continue (y/n)?";
		cin>>gg;
	}
	while(gg!='n');
	return 0;
}
