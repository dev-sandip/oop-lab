// Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.

#include <iostream>
using namespace std;

void convert(int &feet, int &inches)
{
    inches = feet * 12;
}
int main()
{
    int feet, inches;
    cout << "Enter the feet: ";
    cin >> feet;
    convert(feet, inches);
    cout << "The inches are: " << inches << endl;
    return 0;
}