// Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.
#include <iostream> //or
using namespace std;
class Serial
{
    static int serialNumber;

public:
    Serial()
    {
        serialNumber++;
    }
    static void showNum(void)
    {
        cout << "object serial number:\t" << serialNumber << endl;
    }
};
int Serial::serialNumber = 0;
int main()
{
    Serial a;
    a.showNum();
    Serial b;
    b.showNum();
    Serial c;
    c.showNum();
    return 0;
}