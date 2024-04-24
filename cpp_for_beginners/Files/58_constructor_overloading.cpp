#include <iostream>

using namespace std;

class Pizza
{
public:
    string topping1;
    string topping2;

    Pizza(string topping1)
    {
        this->topping1 = topping1;
    }

    Pizza(string topping1, string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

};

int main()
{
    /*
        Overloaded constructors:

        Multiple constructors with same name but
        different parameters allows for varying
        arguments when instantiating an object.
    */

    Pizza pizza_1_topping("pepperoni");
    Pizza pizza_2_topping("pepperoni","mushroom");


    cout << "Pizza has 1 topping: " << pizza_1_topping.topping1 << endl;

    cout << "Pizza has 2 toppings: " << pizza_1_topping.topping1 << " and " << pizza_2_topping.topping2 << endl;
    /*
        Now we will use the constructors according to our need.
    */


    return 0;
}