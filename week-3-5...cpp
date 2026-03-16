#include <iostream>
using namespace std;
int main()
{
int i,n,key,a[10],count=0;
        cout << "enter no of array elements&key";
        cin>>n>>key;
        for(i=0;i<n;i++)
    {
    	cout<<"enter elements"<<i+1;
    	cin>>a[i];
    	if(a[i]==key)
    	cout<<"sk found at"<<i+1;
    	count++;
	}
	if(count==0)
	cout<<"key not found";
else
    cout<<key<<"found"<<cout<<"times";
	}
