// Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition and subtraction operators for addition and subtraction of two coordinate objects. Implement the operator functions as non-member functions (friend operator functions).

#include <iostream>

using namespace std;

class Coordinate
{
private:
    float x, y, z;

public:
    Coordinate(float a, float b, float c) : x(a), y(b), z(c) {};
    friend Coordinate operator+(Coordinate a, Coordinate b);
    friend Coordinate operator-(Coordinate a, Coordinate b);
    void display()
    {
        cout << "(" << x << "," << y << "," << z << ")";
    }
};
Coordinate operator+(Coordinate a, Coordinate b)
{
    Coordinate temp(a.x + b.x, a.y + b.y, a.z + b.z);
    return temp;
}
Coordinate operator-(Coordinate a, Coordinate b)
{
    Coordinate temp(a.x - b.x, a.y - b.y, a.z - b.z);
    return temp;
}
int main()
{
    Coordinate a(1, 2, 3), b(4, 5, 6);
    Coordinate c = a + b;
    Coordinate d = a - b;
    cout << "a: ";
    a.display();
    cout << endl;
    cout << "b: ";
    b.display();
    cout << endl;
    cout << "a + b: ";
    c.display();
    cout << endl;
    cout << "a - b: ";
    d.display();
    cout << endl;
    return 0;
}