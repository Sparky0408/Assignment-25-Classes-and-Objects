#include <iostream>
using namespace std;

class Fact
{
private:
    int fac;

public:
    int i, b = 1, c;
    void setfact(int x)
    {

        for (i = 1; i <= x; i++)
        {
            b = b * i;
        }
        fac = b;
    }

    void showfact(int x)
    {
        cout << "the factorial of "<<x<< " is " << fac;
    }
};

int main()
{
    int a;
    cout << "enter the number: ";
    cin >> a;

    Fact a1;

    a1.setfact(a);
    a1.showfact(a);

    return 0;
}