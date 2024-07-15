// Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.
// A. Make a particular member function of one class as a friend function of another class for addition.
// B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.
// C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another class if the former class is made friend to the latter.
// Make least possible classes to demonstrate all the above in a single program without conflict.

#include <iostream>
using namespace std;

class Point2;
class Point
{

    int x1, y1;

public:
    Point(int x = 0, int y = 0) : x1(x), y1(y) {};
    friend class Point2;
    friend Point2 const add(const Point &p1, const Point2 &p2);
};
class Point2
{
    int x2, y2;

public:
    Point2(int x = 0, int y = 0) : x2(x), y2(y) {};
    friend Point2 const add(const Point &p1, const Point2 &p2)
    {
        return Point2(p2.x2 + p1.x1, p2.y2 + p1.y1);
    }
    Point2 multiply(const Point &p1)
    {
        return Point2(this->x2 * p1.x1, this->y2 * p1.y1);
    }
    Point2 divide(const Point &p1)
    {
        if (this->x2 != 0 && this->y2 != 0)
        {

            return Point2(this->x2 / p1.x1, this->y2 / p1.y1);
        }
        else
        {
            return Point2();
        }
    }
    Point2 subtract(const Point &p)
    {
        return Point2(this->x2 - p.x1, this->y2 - p.y1);
    }
    void display() const
    {
        cout << "(" << this->x2 << ", " << this->y2 << ")" << endl;
    }
};
int main()
{
    Point p1(3, 4);
    Point2 p2(5, 6);
    Point2 addResult = add(p1, p2);
    addResult.display();
    Point2 multiplyResult = p2.multiply(p1);
    multiplyResult.display();
    Point2 divideResult = p2.divide(p1);
    divideResult.display();
    Point2 subtractResult = p2.subtract(p1);
    subtractResult.display();
}
