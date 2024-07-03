// Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.
#include <iostream>
using namespace std;
class SerialNumber
{
private:
    static int nextSerialNumber;
    int serialNumber;

public:
    SerialNumber()
    {
        serialNumber = nextSerialNumber++;
    }

    int getSerialNumber() const
    {
        return serialNumber;
    }
    static int getNextSerialNumber()
    {
        return nextSerialNumber;
    }
};

int SerialNumber::nextSerialNumber = 1;

int main()
{
    SerialNumber obj1;
    SerialNumber obj2;
    SerialNumber obj3;
    cout << "Object 1 Serial Number: " << obj1.getSerialNumber() << endl;
    cout << "Object 2 Serial Number: " << obj2.getSerialNumber() << endl;
    cout << "Object 3 Serial Number: " << obj3.getSerialNumber() << endl;
    cout << "Next Serial Number: " << SerialNumber::getNextSerialNumber() << endl;
    return 0;
}
