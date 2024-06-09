// Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.

// An employee with ... ... ... has received Rs ... ... ...as a bonus

// and

// had worked ... ... ... hours as overtime in the year ... ... ...

#include <iostream>
using namespace std;
class Employee
{
private:
    int employee_id;
    float total_bonus;
    float total_overtime;
    int year;

public:
    void setpara(int id, float bonus, float overtime, int y)
    {
        employee_id = id;
        total_bonus = bonus;
        total_overtime = overtime;
        year = y;
    }
    void displayreport()
    {
        cout << "An employee with id " << employee_id << " has received Rs " << total_bonus << " as a bonus" << endl;
        cout << "and" << endl;
        cout << "had worked " << total_overtime << " hours as overtime in the year " << year << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee employees[n];
    for (int i = 0; i < n; i++)
    {
        int id;
        float bonus, overtime;
        int year;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the total bonus: ";
        cin >> bonus;
        cout << "Enter the total overtime: ";
        cin >> overtime;
        cout << "Enter the year: ";
        cin >> year;
        employees[i].setpara(id, bonus, overtime, year);
    }
    for (int i = 0; i < n; i++)
    {
        employees[i].displayreport();
    }
    return 0;
}