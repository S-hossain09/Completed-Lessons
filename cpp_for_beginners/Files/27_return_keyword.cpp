#include <iostream>

using namespace std;

double square(double length)
{
    double result = length * length;

    return result;
}

int main()
{
    double length = 5.0;

    double area = square(length);

    cout << "Area : " << area << "cm^2" << endl;

    return 0;
}