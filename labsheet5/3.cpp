// Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.

#include <iostream>
class Operation
{
    int value;

public:
    Operation(int value = 0) : value(value) {};

    bool operator==(const Operation &o1)
    {
        return (o1.value == this->value);
    }
    bool operator<(const Operation &o1)
    {
        return (this->value < o1.value);
    }
    bool operator>(const Operation &o1)
    {
        return (this->value > o1.value);
    }
    bool operator!=(const Operation &o1)
    {
        return (this->value != o1.value);
    }
    bool operator>=(const Operation &o1)
    {
        return (this->value >= o1.value);
    }
    bool operator<=(const Operation &o1)
    {
        return (this->value <= o1.value);
    }
};
int main()
{
    Operation o1(3);
    Operation o2(4);
    Operation o3(3);
    std::cout << (o1 == o2) << std::endl;
    std::cout << (o1 < o2) << std::endl;
    std::cout << (o1 > o2) << std::endl;
    std::cout << (o1 != o2) << std::endl;
    std::cout << (o1 >= o2) << std::endl;
    std::cout << (o1 <= o2) << std::endl;
    std::cout << (o1 == o3) << std::endl;
    std::cout << (o1 < o3) << std::endl;
    std::cout << (o1 > o3) << std::endl;
    std::cout << (o1 != o3) << std::endl;
    std::cout << (o1 >= o3) << std::endl;
    std::cout << (o1 <= o3) << std::endl;
    return 0;
}