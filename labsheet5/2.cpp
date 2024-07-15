// Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition and subtraction operators for addition and subtraction of two coordinate objects. Implement the operator functions as non-member functions (friend operator functions)

#include <iostream>
using namespace std;

class Dimension;
class Dimension3
{

    int x, y, z;

public:
    Dimension3(int x3 = 0, int y3 = 0, int z3 = 0) : x(x3), y(y3), z(z3) {};
    friend Dimension3 operator+(const Dimension3 &d1, const Dimension3 &d2);
    friend Dimension3 operator-(const Dimension3 &d1, const Dimension3 &d2);
    void display() const
    {
        cout << "(" << this->x << ", " << this->y << "," << this->z << ")" << endl;
    }
};
Dimension3 operator+(const Dimension3 &d1, const Dimension3 &d2)
{
    return Dimension3(d1.x + d2.x, d1.y + d2.y, d1.z + d2.z);
}
Dimension3 operator-(const Dimension3 &d1, const Dimension3 &d2)
{
    return Dimension3(d1.x - d2.x, d1.y - d2.y, d1.z - d2.z);
}
int main()
{

    Dimension3 d1(3, 4);
    Dimension3 d2(5, 6);
    Dimension3 addResult = d1 + d2;
    addResult.display();
    Dimension3 subResult = d1 - d2;
    subResult.display();
    return 0;
}
