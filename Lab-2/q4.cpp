/*Write a function that passes two temperatures by reference and
sets the larger of the two numbers to 100 by using return by reference.*/
#include <iostream>
#include <iomanip>
using namespace std;

int &func(int &temp1, int &temp2)
{
    if (temp1 > temp2)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }
}

int main()
{
    int temp1, temp2;
    cout << "Enter temp1 and temp2?";
    cin >> temp1 >> temp2;
    func(temp1, temp2) = 100;
    cout << "Value of temp1 and temp2 after calling the function" << endl;
    cout << "temp1 " << temp1 << " temp2 " << temp2;
    return 0;
}
