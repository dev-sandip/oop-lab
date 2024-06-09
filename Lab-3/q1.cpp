// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.
#include <iostream>
using namespace std;
class Celsius
{
private:
    float temp;

public:
    void setTemp(float t)
    {
        temp = t;
    }
    float toFahrenheit()
    {
        return (temp * 9 / 5) + 32;
    }
};
class Fahrenheit
{
private:
    float temp;

public:
    void setTemp(float t)
    {
        temp = t;
    }
    float toCelcius()
    {
        return (temp - 32) * 5 / 9;
    }
};

int main()
{

    Celsius c;
    Fahrenheit f;
    f.setTemp(212);
    c.setTemp(100);
    cout << "100 Celcius in Fahrenheit is: " << c.toFahrenheit() << endl;
    cout << "100 Fahrenheit in Celcius is: " << f.toCelcius() << endl;
    return 0;
}