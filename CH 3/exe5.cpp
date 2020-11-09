#include<iostream>
using namespace std;
int main()
{
	for(int a=1; a<21; a++)
	{
	for(int b=21-a; b>0; b--)
	cout<<" ";
	for(int c=1; c<a*2; c++)
	cout<<"x";
	cout<<endl;
}
	return 0;
	
}

