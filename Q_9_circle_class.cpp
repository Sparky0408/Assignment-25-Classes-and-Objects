#include <iostream>
using namespace std;

class area
{
private:
    float area;

public:
    void areaofcircle(int x)
    {
        float a;
        area = 3.14 * x * x;
    }

    void showarea()
    {
        cout << "the area of the circle is: " << area;
    }
};

int main()
{
    float i;

    cout << "enter the radius of circle: ";
    cin >> i;

    area a1;

    a1.areaofcircle(i);
    a1.showarea();

    return 0;
}