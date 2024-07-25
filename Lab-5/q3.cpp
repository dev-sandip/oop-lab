// Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.

#include <iostream>
using namespace std;

class Integer
{
private:
    int value;

public:
    Integer(int val) : value(val) {}

    // Getter for the value (so we can access it in main)
    int getValue() const { return value; }

    // Comparison operators
    bool operator==(const Integer &obj) const
    {
        return value == obj.value;
    }

    bool operator<(const Integer &obj) const
    {
        return value < obj.value;
    }

    bool operator>(const Integer &obj) const
    {
        return value > obj.value;
    }

    bool operator!=(const Integer &obj) const
    {
        return value != obj.value;
    }

    bool operator>=(const Integer &obj) const
    {
        return value >= obj.value;
    }

    bool operator<=(const Integer &obj) const
    {
        return value <= obj.value;
    }
};

int main()
{
    Integer a(5), b(5), c(10);

    cout << "a: " << a.getValue() << endl;
    cout << "b: " << b.getValue() << endl;
    cout << "c: " << c.getValue() << endl;

    cout << "a == b: " << (a == b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout << "a == c: " << (a == c) << endl;
    cout << "a < c: " << (a < c) << endl;
    cout << "a > c: " << (a > c) << endl;
    cout << "a != c: " << (a != c) << endl;
    cout << "a >= c: " << (a >= c) << endl;
    cout << "a <= c: " << (a <= c) << endl;

    return 0;
}