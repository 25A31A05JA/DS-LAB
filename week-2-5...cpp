#include<iostream>
using namespace std;
int main()
{
	int a=4,b=5,c=6;
	cout<<add(a,b);
	cout<<add(a,b,c);
}
add(int x,int y)
{
	return x+y;
}
int add(int x,int y,int z)
{
	return x+y+z;
}
