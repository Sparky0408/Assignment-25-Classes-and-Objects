#include <iostream>
using namespace std;

class area
{
private:
    int areac, arear, areas;

public:
    void areaofsuqare(int s)
    {
        areas = s * s;
    }

    void areaofrectangle(int l, int b)
    {
        arear = l * b;
    }

    void areaofcircle(int r)
    {
        areac = r * r;
    }

    void displaysquare()
    {
        cout << endl
             << "the area of the square is: " << areas;
    }

    void displayrectangle()
    {
        cout << endl
             << "the area og the rectnagle is: " << arear;
    }

    void displaycircle()
    {
        cout << endl
             << "area of the circle is: " << areac;
    }
};

int main()
{
    int r, l, b, s;

    cout << "enter the side of sqaure is: ";
    cin >> s;

    cout << "enter the lenght and breath: ";
    cin >> l >> b;

    cout << "enter the radius of circle: ";
    cin >> r;

    area s1, r1, c1;

    s1.areaofsuqare(s);
    r1.areaofrectangle(l, b);
    c1.areaofcircle(r);

    s1.displaysquare();
    r1.displayrectangle();
    c1.displaycircle();

    return 0;
}