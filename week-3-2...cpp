#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"constructor called\n";
		}
		void hello()
		{
			cout<<"hello";
		}
	~student()
	{
		cout<<"\n destructor called";
	}
};
int main()
{
 student s1;
}
