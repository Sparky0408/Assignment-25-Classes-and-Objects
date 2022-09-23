#include <iostream>
using namespace std;

class Reverse
{
private:
    int reve;

public:
    void reverse(int x)
    {
        int rev = 0, rem;
        while (x != 0)
        {
            rem = x % 10;
            x = x / 10;
            rev = rev * 10 + rem;
        }
        reve = rev;
    }

    void display()
    {
        cout << "the reverse number is: " << reve;
    }
};

int main()

{
    int i;

    cout << "enter the number: ";
    cin >> i;

    Reverse r1;

    r1.reverse(i);
    r1.display();

    return 0;
}