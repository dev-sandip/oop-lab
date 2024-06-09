// Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.

#include <iostream>
using namespace std;
class Prime
{
private:
    int num;

public:
    void setNum(int n)
    {
        num = n;
    }
    bool isPrime()
    {
        if (num <= 1)
            return false;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};
int main()
{
    char response;
    Prime p;
    do
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;
        p.setNum(n);
        if (p.isPrime())
            cout << n << " is a prime number." << endl;
        else
            cout << n << " is not a prime number." << endl;
        cout << "Do you want to check another number? (y/n): ";
        cin >> response;
    } while (response == 'y');
    return 0;
}