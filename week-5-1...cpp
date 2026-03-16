#include <iostream>
using namespace std;
class Addition
{
private:
	int n;
    int *ptr;
    int sum;
public:
    void getSize()
    {
        cout << "Enter number of elements: ";
        cin >> n;
        ptr = new int[n];
    }
    void getElements()
    {
        cout << "Enter " << n << " elements:\n";
        for(int i = 0; i < n; i++)
        {
            cin >> ptr[i];
        }
    }
    void calculateSum()    {
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = sum + ptr[i];
        }
    }
    void displaySum()
    {
        cout << "Sum of elements = " << sum << endl;
    }
    ~Addition()
    {
        delete[] ptr;
    }
main()
{
    Addition obj;
    obj.getSize();
    obj.getElements();
    obj.calculateSum();
    obj.displaySum();
    return 0;};
int }
