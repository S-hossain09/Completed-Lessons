#include <iostream>

using namespace std;

class Shape
{
public:
    double area;
    double volume;
};

class Cube : public Shape
/*     ^              ^
    Children        Parent
    class           class
*/
{
public:
    double side;

    Cube(double side)
    {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape
{
public:
    double radius;

    Sphere(double radius)
    {
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main()
{
    /*
        Inheritance:

        A class can receive attributes and methods from
        another class .

        Children classes inherit from a Parent Class
           ^
           Receiving
           class

        Helps to reuse similar code found within
        multiple classes
    */

    Cube cube(10);
    Sphere sphere(5);

    cout << "Area: " << cube.area << "cm\n";
    cout << "Volume: " << cube.volume << "cm\n";

    return 0;
}