#include <iostream>
using namespace std;

class Time
{
private:
    int hr, min, sec;                  //enstnce member variable

public:
    void settime(int a, int b, int c) // enstance member function
    {
        hr = a;
        min = b;
        sec = c;
    }

    void showtime()
    {
        cout<<endl << " the time is " << hr << " hr " << min << " min " << sec << " sec ";
    }
};

int main()
{
    Time t1, t2;

    t1.settime(3, 15, 4);

    t2.settime(6, 32, 54);

    t1.showtime();

    t2.showtime();

    return 0;
}