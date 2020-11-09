#include<iostream>
using namespace std;
class Int
{
	private:
	int data;
	public:
	Int():data(0)
	{}
	Int(int d):data(d)
	{}
	void adddata(Int d1,Int d2)
	{
		data=d1.data+d2.data;
	}
	void showdata()
	{
		cout<<"The Total Result is = "<<data;
	}
};
int main()
{
	Int data1(30);
	Int data2(40);
	Int data3;
	data3.adddata(data1,data2);
	data3.showdata();
	return 0;
}
