// Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.
#include <iostream>
using namespace std;
inline void net_payment(float salary)
{
    float tax = 0.1 * salary;
    cout << "Net payment to the employee by the company is: " << salary - tax << endl;
}
int main()
{
    float salary;
    cout << "Enter the salary of the employee: ";
    cin >> salary;
    net_payment(salary);
    return 0;
}