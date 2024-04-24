#include <iostream>

using namespace std;


struct Cars
{
    string model;
    int year;
    string color;
};

void print_car(Cars &car)
{
    cout << "Car model : " << car.model << endl;
    cout << "Car year : " << car.year << endl;
    cout << "Car color : " << car.color << endl;
}

int main()
{
    Cars car1;
    Cars car2;

    car1.model = "Audi";
    car1.year = 2022;
    car1.color = "Black";

    car2.model = "Nissan";
    car2.year = 2021;
    car2.color = "Grey";

    print_car(car1);

    return 0;
}