// Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.

// A. Make a particular member function of one class as a friend function of another class for addition.

// B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.

// C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.

// Make least possible classes to demonstrate all the above in a single program without conflict.
#include <iostream>
#include <cmath>

using namespace std;
class Coordinate;
class Vector;
class Polar
{
private:
    float radius, theta;

public:
    Polar(float r, float angle) : radius(r), theta(angle) {};
    friend class Vector;
    Coordinate toCartesian();
};
class Vector
{
public:
    Coordinate add(Coordinate a, Coordinate b);
    Coordinate sub(Coordinate a, Coordinate b);
    Coordinate mul(Coordinate a, Coordinate b);
    Coordinate div(Coordinate a, Coordinate b);
};

class Coordinate
{
private:
    float x, y;

public:
    Coordinate(float a, float b) : x(a), y(b) {};
    friend Coordinate Vector::add(Coordinate a, Coordinate b);
    friend Coordinate Vector::sub(Coordinate a, Coordinate b);
    Polar toPolar()
    {
        Polar temp(sqrt(x * x + y * y), atanf(y / x));
        return temp;
    }
    void display()
    {
        cout << "(" << x << "," << y << ")";
    }
};

Coordinate Polar::toCartesian()
{
    Coordinate C(radius * cos(theta), radius * sin(theta));
    return C;
}
Coordinate Vector::add(Coordinate a, Coordinate b)
{
    Coordinate temp(a.x + b.x, a.y + b.y);
    return temp;
}
Coordinate Vector::sub(Coordinate a, Coordinate b)
{
    Coordinate temp(a.x - b.x, a.y - b.y);
    return temp;
}
Coordinate Vector::mul(Coordinate a, Coordinate b)
{
    Polar pa = a.toPolar();
    Polar pb = b.toPolar();
    Polar p(pa.radius * pb.radius, pa.theta + pb.theta);
    return p.toCartesian();
}
Coordinate Vector::div(Coordinate a, Coordinate b)
{
    Polar pa = a.toPolar();
    Polar pb = b.toPolar();
    Polar p(pa.radius / pb.radius, pa.theta - pb.theta);
    return p.toCartesian();
}

int main()
{
    int x, y;
    char temp;
    cout << "Enter cordinate x y in format x,y";
    cin >> x >> temp >> y;
    Coordinate a(x, y);
    cout << "Enter cordinate x y in format x,y";
    cin >> x >> temp >> y;
    Coordinate b(x, y);
    Vector v;
    Coordinate c = v.add(a, b);
    cout << "The sum is ";
    c.display();
    cout << endl;
    Coordinate d = v.sub(a, b);
    cout << "The difference is";
    d.display();
    cout << endl;
    Coordinate p = v.mul(a, b);
    cout << "The product is";
    p.display();
    cout << endl;
    Coordinate q = v.div(a, b);
    cout << "The quotient is";
    q.display();
    cout << endl;
    return 0;
}