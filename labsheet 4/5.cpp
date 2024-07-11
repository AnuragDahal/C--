// Write a program that illustrates the following relationship and comment on them.

// i) const_object.non_const_mem_function

// ii) const_object.const_mem_function

// iii) non_const_object.non_const_mem_function

// iv) non_const_object.const_mem_function

#include <iostream>

class Example
{
public:
    int value;

    // Constructor
    Example(int v) : value(v) {}

    // Non-const member function
    void nonConstFunc()
    {
        std::cout << "Non-const function called. Value is " << value << std::endl;
    }

    // Const member function
    void constFunc() const
    {
        std::cout << "Const function called. Value is " << value << std::endl;
    }
};

int main()
{
    const Example constObject(10);
    Example nonConstObject(20);

    // i) const_object.non_const_mem_function
    // constObject.nonConstFunc(); 
    // This will cause a compile-time error because a const object cannot call non-const member functions.

    // ii) const_object.const_mem_function
    constObject.constFunc(); // This is valid. A const object can call const member functions.

    // iii) non_const_object.non_const_mem_function
    nonConstObject.nonConstFunc(); // This is valid. A non-const object can call non-const member functions.

    // iv) non_const_object.const_mem_function
    nonConstObject.constFunc(); // This is also valid. A non-const object can call const member functions.

    return 0;
}