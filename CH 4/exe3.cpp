#include<iostream>
using namespace std;
struct Distance
{
	int feet;
	float inches;
};
struct Volume
{
	Distance length;
	Distance width;
	Distance height;
};
int main()
{
	float l,w,h;
	Volume room={{16,3.5},{12,6.25},{8,1.75}};
	
	l=room.length.feet+room.length.inches/12.0;
	w=room.width.feet+room.width.inches/12.0;
	h=room.height.feet+room.height.inches/12.0;
	cout<<"Volume="<<l*w*h<<" cubic feet";
	return 0;
}

   /*cout<<"Enter Length feet: ";
	cin>>room.length.feet;
	cout<<"Enter Length inches: ";
	cin>>room.length.inches;
	cout<<"Enter width feet: ";
	cin>>room.width.feet;
	cout<<"Enter width inches: ";
	cin>>room.width.inches;
	cout<<"Enter height feet: ";
	cin>>room.height.feet;
	cout<<"Enter height inches: ";
	cin>>room.height.inches;*/
