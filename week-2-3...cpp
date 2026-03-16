#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int*p;
	cout<<"enter n value";
	cin>>n;
	p=new int[n];
	cout<<"enter array elements";
	for(i=0;i<10;i++)
	cin>>*(p+i);
	cout<<"\n array elements";
	for(i=0;i<10;i++)
	cout<<"\n array elements";
	for(i=0;i<10;i++)
	cout<<*(p+i)<<"";
	delete[]p;
	return 0;
}
