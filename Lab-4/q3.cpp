// Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.
#include <iostream>
using namespace std;
class Department
{
private:
    int deptID;
    string deptName;

public:
    Department(int id, string name);
    ~Department();
};
Department ::Department(int id, string name)
{
    deptID = id;
    deptName = name;
    cout << "Object " << deptName << " is created" << endl;
}
Department ::~Department()
{
    cout << "Object " << deptName << " goes out of the scope" << endl;
}
int main()
{
    Department d1(1, "CSE");
    Department d2(2, "ECE");
    Department d3(3, "ME");
    return 0;
}