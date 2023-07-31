// a class in c++ is an extension of the struct data type and adds the feature for function definition
#include <iostream>

class point
{
public:
    int x;
    int y;

    // scope resolution operator is used to tie a function to a class in which it is defined.
    void display();

    // constructor are member functions that are used for initailizing variables of objects when they are created.
    // they bear the same name with the class and have no return type, not even void.

    // non default constructor

    point(int a, int b);
    // default constructor

    point();
    // copy constructor
    point(point &obj);

    // default constructors have no arguments/parameters, while non-default constructors have arguments.
    // a copy constructor is a constructor whose arguments are of the type of the class it belongs to.
};

point::point(int a, int b)
{
    x = a;
    y = b;
}

point::point()
{
    x = 0;
    y = 0;
}

point::point(point &obj)
{
    x = obj.x;
    y = obj.y;
}

void point::display()
{
    std::cout << "points (" << x << ", " << y << ")" << std::endl;
}

int main()
{

    point a(60, 50);
    point b;
    b.display();
    a.display();
    return 0;
}