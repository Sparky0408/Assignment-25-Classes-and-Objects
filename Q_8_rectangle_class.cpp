#include <iostream>
using namespace std;

class Rectangle
{
private:
    int area;

public:
    void are(int x, int b)
    {
        area = x * b;
    }

    void showarea()
    {
        cout << "the area of the cicrle is: " << area;
    }
};
int main()
{
    int i, j;
    cout << "enter lenght and brath of reactamgle: ";
    cin >> i >> j;

    Rectangle r1;

    r1.are(i, j);
    r1.showarea();

    return 0;
}