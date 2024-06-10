/*Write a program using the function overloading that converts feet to inches.
Use function with no argument, one argument and two arguments.
Decide yourself the types of arguments. Use pass by reference in any
one of the function above.*/
#include <iostream>
#include <iomanip>
using namespace std;
#define CONVERSION_FACTOR 12

void convert()
{
    cout << "Feet?";
    int feet;
    cin >> feet;
    float inch;
    inch = feet * CONVERSION_FACTOR;
    cout << "In inch" << inch;
}
float convert(int feet)
{
    return feet * CONVERSION_FACTOR;
}
void convert(int feet, float &inch)
{
    inch = feet * CONVERSION_FACTOR;
}

int main()
{

    convert();
    int feet = 12;
    float inch;
    cout << "Converting 12 feet to inch" << endl;
    cout << "12 feet in inch :" << convert(feet) << endl;
    feet = 10;
    convert(feet, inch);
    cout << "Converting " << feet << "to inch" << endl;
    cout << feet << " in inch:" << inch << endl;
    return 0;
}
