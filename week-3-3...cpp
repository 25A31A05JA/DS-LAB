#include <iostream>
using namespace std;

class Calc
{
public:
    int a, b;

    void add()
    {
        cout << "Addition = " << a + b << endl;
    }

    void sub()
    {
        cout << "Subtraction = " << a - b << endl;
    }
};

int main()
{
    Calc c;

    cout << "Enter two numbers: ";
    cin >> c.a >> c.b;

    c.add();
    c.sub();

    return 0;
}
