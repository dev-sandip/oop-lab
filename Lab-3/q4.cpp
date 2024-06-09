// Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.

#include <iostream>
#include <cmath>
using namespace std;
class Circle
{
private:
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }
    float getRadius()
    {
        return radius;
    }
    float getArea()
    {
        return M_PI * radius * radius;
    }
    float getPerimeter()
    {
        return 2 * M_PI * radius;
    }
};
class Rectangle
{
private:
    float length, width;

public:
    void setDimensions(float l, float w)
    {
        length = l;
        width = w;
    }

    float getArea()
    {
        return length * width;
    }
    float getPerimeter()
    {
        return 2 * (length + width);
    }
};
class Triangle
{
private:
    float a, b, c;

public:
    void setSides(float x, float y, float z)
    {
        a = x;
        b = y;
        c = z;
    }
    float getArea()
    {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    float getPerimeter()
    {
        return a + b + c;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;
    c.setRadius(5);
    cout << "Circle with radius " << c.getRadius() << " has area " << c.getArea() << " and perimeter " << c.getPerimeter() << endl;

    r.setDimensions(5, 10);
    cout << "Rectangle with length " << 5 << " and width " << 10 << " has area " << r.getArea() << " and perimeter " << r.getPerimeter() << endl;

    t.setSides(3, 4, 5);
    cout << "Triangle with sides 3, 4, 5 has area " << t.getArea() << " and perimeter " << t.getPerimeter() << endl;
    return 0;
}