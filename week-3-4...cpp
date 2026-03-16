#include <iostream>
using namespace std;
int main()
{
int i,n,key,a[20];
bool status=false;
cout<<"enter no of array elements and search key";
cin>>n>>key;
for(i=0;i<n;i++)
    {
        cout << "enter elements" << i+1;
        cin>>a[i];
        if(a[i]==key)
        cout<<"key found at"<<i+1;
        status=true;
        break;
    }
    if(!status)
    cout<<"key not found";
}
