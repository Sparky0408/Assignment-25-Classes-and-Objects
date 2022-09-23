#include <iostream>
using namespace std;

class largest
{
private:
    int max;

public:
    void large(int a, int b, int c)
    {
        if (a > b && a > c)
        {
            max = a;
        }

        if (b > a && b > c)
        {
            max = b;
        }

        if (c > a && c > b)
        {
            max = c;
        }
    }
    void findmax()
    {
        cout << "the max number is: " << max;
    }
};

int main()
{
    int x, y, z;

    cout << "enter three number: ";
    cin >> x >> y >> z;

    largest l1;
    l1.large(x, y, z);
    l1.findmax();

    return 0;
}