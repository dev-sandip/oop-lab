// Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, while causing appropriate increments to the month and year (use the appropriate condition for leap year). The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.
#include <iostream>
using namespace std;
class date
{
    int y, m, d;

public:
    void get_data()
    {
        cout << "Enter valid date.";
        cout << endl
             << "Enter year: ";
        cin >> y;
        cout << endl
             << "Enter month: ";
        cin >> m;
        cout << endl
             << "Enter day: ";
        cin >> d;
    }
    void operator++(int)
    {
        cout << y << ":" << m << ":" << d++ << endl;
    }
    void operator++()
    {
        ++d;
        if (((y % 4 == 0) && (y % 100 == 0) && (y % 400 == 0)) || ((y % 4 == 0) && (y % 100 != 0)))
        {
            if ((m / 2 == 1) && (29 < d))
            {
                m++;
                d = d - 29;
            }
        }
        else
        {
            if ((m / 2 == 1) && (28 < d))
            {
                m++;
                d = d - 28;
            }
        }
        if ((m % 2 == 1) && (31 < d))
        {
            m++;
            d = d - 31;
        }
        if ((m % 2 == 0) && (m / 2 != 1) && (30 < d))
        {
            m++;
            d = d - 30;
        }
        if (12 < m)
        {
            m = 1;
            y++;
        }
        cout << y << ":" << m << ":" << d << endl;
    }
};
int main()
{
    date yyyy;
    yyyy.get_data();
    cout << endl
         << "Prefix Operator Overloaded." << endl;
    yyyy++;
    cout << endl
         << "Postfix Operator Overloaded." << endl;
    ++yyyy;
    return 0;
}