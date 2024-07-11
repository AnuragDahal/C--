// Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.

#include <iostream>
class CarPark
{

    int carId;
    int chargePerHour;
    float parkedTime;

public:
    void setData(int car_id, int cph, float parked_time)
    {
        carId = car_id;
        chargePerHour = cph;
        parkedTime = parked_time;
    };
    void display()
    {
        float charges = chargePerHour * parkedTime;
        std::cout << "Car ID: " << carId << "\n"
                  << "Parked Hours: " << parkedTime << "\n"
                  << "Total Charges: Rs " << charges << std::endl;
    }
};
int main()
{
    CarPark car1;
    car1.setData(100, 34, 3);
    car1.display();
    return 0;
}