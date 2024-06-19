// Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
#include <iostream>
using namespace std;
class Vehicle
{
private:
    int num_vehicle;
    int hour;
    int rate;

public:
    Vehicle(int num_vehicle, int hour, int rate);
    Vehicle(const Vehicle &v);
};

Vehicle::Vehicle(int vn, int h, int r)
{
    this->num_vehicle = vn;
    this->hour = h;
    this->rate = r;
    if (num_vehicle > 10)
    {
        cout << "Total charge: " << (num_vehicle * hour * rate) * 0.9 << endl;
    }
    else
    {
        cout << "Total charge: " << num_vehicle * hour * rate << endl;
    }
};
Vehicle::Vehicle(const Vehicle &v)
{
    num_vehicle = v.num_vehicle;
    hour = v.hour;
    rate = v.rate;
    cout << "Bit-by-bit copy of one object to another" << endl;
    cout << "Number of vehicles: " << num_vehicle << endl;
    cout << "Hour: " << hour << endl;
    cout << "Rate: " << rate << endl;
}

int main()
{
    Vehicle v1(50, 1, 10);
    Vehicle v2(v1);
    return 0;
}