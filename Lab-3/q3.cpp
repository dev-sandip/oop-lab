// Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.
#include <iostream>
using namespace std;
class CarPark
{
private:
    int carId;
    int chargePerHour;
    float parkedTime;

public:
    void setCarId(int id)
    {
        carId = id;
    }
    void setChargePerHour(int charge)
    {
        chargePerHour = charge;
    }
    void setParkedTime(float time)
    {
        parkedTime = time;
    }
    void showCharges()
    {
        cout << "Car ID: " << carId << endl;
        cout << "Charges: " << chargePerHour * parkedTime << endl;
    }
    void showParkedTime()
    {
        cout << "Car ID: " << carId << endl;
        cout << "Parked Time: " << parkedTime << " hours" << endl;
    }
};

int main()
{
    char response;
    CarPark c;
    do
    {
        int id, charge;
        float time;
        cout << "Enter car ID: ";
        cin >> id;
        c.setCarId(id);
        cout << "Enter charge per hour: ";
        cin >> charge;
        c.setChargePerHour(charge);
        cout << "Enter parked time: ";
        cin >> time;
        c.setParkedTime(time);
        c.showCharges();
        c.showParkedTime();
        cout << "Do you want to check another car? (y/n): ";
        cin >> response;
    } while (response == 'y');
    return 0;
}