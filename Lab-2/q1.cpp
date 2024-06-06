// Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function
#include <iostream>

using namespace std;
struct date
{
    int mm, dd, yy;
};

int main()
{
    struct date d1;
    cout << "Enter the date in mm/dd/yyyy format: ";
    cin >> d1.mm >> d1.dd >> d1.yy;
    cout << "The date is: " << d1.mm << "/" << d1.dd << "/" << d1.yy << endl;
    return 0;
}