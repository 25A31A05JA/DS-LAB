#include<iostream>
using namespace std;
class student
{
	public:
	int rollno,marks;
	public:
	void read()
	{
		cout<<"enter rollno and marks";
		cin>>rollno>>marks;
	}
	void display()
	{
	cout<<"rollno is:"<<rollno<<endl<<"marks is:"<<marks;
}
};
int main()
{
	student s1;
	s1.read();
	s1.display();
}
