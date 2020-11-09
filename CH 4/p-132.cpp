#include<iostream>
using namespace std;
struct part
{
	int onepart;
	int twopart;
	float threepart;
};
int main()
{
part part1;
part1.onepart=222;
part1.twopart=333;
part1.threepart=444.3;
cout<<part1.onepart<<endl;
cout<<part1.twopart<<endl;
cout<<part1.threepart;
return 0;
}
