// Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor)

#include <iostream>

class ParkingLot
{
    int num_vehicle;
    int hour;
    double rate;

public:
    // Constructor to initialize data members
    ParkingLot(int nv, int h, double r) : num_vehicle(nv), hour(h), rate(r) {}

    // Copy constructor for bit-by-bit copy
    ParkingLot(const ParkingLot &p)
    {
        num_vehicle = p.num_vehicle;
        hour = p.hour;
        rate = p.rate;
    }

    // Function to calculate and display total charge
    void displayTotalCharge()
    {
        double totalCharge = num_vehicle * hour * rate;
        if (num_vehicle > 10)
        {
            totalCharge *= 0.9; // Apply 10% discount
        }
        std::cout << "Total Charge: $" << totalCharge << std::endl;
    }
};

int main()
{
    ParkingLot lot1(12, 3, 5.0); // Object with more than 10 vehicles
    lot1.displayTotalCharge();

    ParkingLot lot2 = lot1;    // Bit-by-bit copy of lot1 to lot2 using copy constructor
    lot2.displayTotalCharge(); // Display total charge for lot2 to verify copy

    return 0;
}