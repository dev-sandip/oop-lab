// Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.
#include <iostream> //or
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    Time()
    {
        h = 0;
        m = 0;
        s = 0;
    }
    Time(int dh, int dm, int ds)
    {
        h = dh;
        m = dm;
        s = ds;
    }
    Time add_time(Time t1, Time t2)
    {
        t1.s = t1.s + t2.s;
        if (t1.s > 60)
        {
            t1.m++;
            t1.s = t1.s - 60;
        }
        t1.m = t1.m + t2.m;
        if (t1.m > 60)
        {
            t1.h++;
            t1.m = t1.m - 60;
        }
        t1.h = t1.h + t2.h;
        return t1;
    }
    void disp_result()
    {
        cout << "Result = " << h << ':' << m << ':' << s;
    }
};
int main()
{
    Time t1(6, 35, 17);
    Time t2(7, 19, 59);
    Time disp;
    disp = disp.add_time(t1, t2);
    disp.disp_result();
    return 0;
}