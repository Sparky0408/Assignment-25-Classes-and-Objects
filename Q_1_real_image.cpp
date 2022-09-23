#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;                     // enstance member varaible

public:
    void setdeta(int x, int y)   // enstance member function
    {
        a = x;
        b = y;                  // enstance member varaible
    }
    void showdeta()            // enstance member function
    {
        cout << endl
             << " real=" << a << " image=" << b;
    }
};

int main()
{
    Complex a1, a2;

    a1.setdeta(5, 6);
    a2.setdeta(7, 8);
    a1.showdeta();
    a2.showdeta();
    cout << endl;

    return 0;
}