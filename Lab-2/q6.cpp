// Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are

// Chief executive officer Rs. 35000/m

// Information officer Rs. 25000/m

// System analyst Rs. 24000/m

// Programmer Rs. 18000/m
// Make a function that takes two arguments; one salary and the other increment. Use proper default argument.

#include <iostream>
#include <string>
using namespace std;
struct employee
{
    float salary;
    float increment;
    string post;
};
void net_payment(employee &e)
{
    e.salary += e.salary * e.increment / 100;
    cout << "Increased Salary of " << e.post << " is: " << e.salary << endl;
}

int main()
{
    employee ceo = {35000, 9, "Chief Executive Officer"};
    employee io = {25000, 10, "Information Officer"};
    employee sa = {24000, 12, "System Analyst"};
    employee p = {18000, 12, "Programmer"};
    net_payment(ceo);
    net_payment(io);
    net_payment(sa);
    net_payment(p);
    return 0;
}