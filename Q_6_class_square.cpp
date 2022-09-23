#include <iostream>
using namespace std;

class Square
{
private:
    int sq;

public:
    void squ(int a)

    {

        sq = a * a;
    }

    void showsq(int c)
    {
        cout << "the square of " << c << " is " << sq;
    }
};

int main()

{
    int i;

    cout << "enter the number: ";
    cin >> i;

    Square s1;
    s1.squ(i);
    s1.showsq(i);

    return 0;
}