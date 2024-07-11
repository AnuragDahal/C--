
// ## Geometric Shapes
// Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.

#include <iostream>
#include <cmath>
class Circle
{
    int radius;

public:
    void setRadius(int value)
    {
        this->radius = value;
    }

    void display()
    {
        int perimeter, area;
        perimeter = 2 * 3.14 * radius;
        area = 3.14 * radius * radius;
        std::cout << "The perimeter of circle is : " << perimeter << std::endl;
        std::cout << "The area of circle is : " << area << std::endl;
    }
};
class Rectangle
{
    int length, breadth;

public:
    void setData(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    void display()
    {
        int perimeter, area;
        perimeter = 2 * (this->length + this->breadth);
        area = this->length * this->breadth;
        std::cout << "The perimeter of Rectangle is: " << perimeter << std::endl;
        std::cout << "The area of rectangle is: " << area << std::endl;
    }
};
class Triangle
{
    int base, height;

public:
    void setData(int base, int height)
    {
        this->base = base;
        this->height = height;
    }

    void display()
    {
        double hypotenuse = sqrt(base * base + height * height);
        double perimeter = base + height + hypotenuse;
        double area = (base * height) / 2.0;
        std::cout << "The perimeter of the Triangle is: " << perimeter << std::endl;
        std::cout << "The area of the Triangle is: " << area << std::endl;
    }
};
int main()
{
    Circle cir;
    Rectangle rect;
    Triangle tri;
    cir.setRadius(10);
    cir.display();
    rect.setData(10, 20);
    rect.display();
    tri.setData(10, 15);
    tri.display();
    return 0;
}