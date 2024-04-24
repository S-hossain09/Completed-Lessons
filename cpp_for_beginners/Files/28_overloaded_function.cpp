#include <iostream>

using namespace std;

void bakePizza()
{
    cout << "Here is your pizza!!" << endl;
}

void bakePizza(string topping1)
{
    cout << "Here is your pizza with !!" << topping1 << endl;
}

void bakePizza(int num, string topping2)
{
    cout << "Here is your " << num << " pizzas !!" << topping2 << endl;
}

int main()
{

    bakePizza();
    bakePizza("Mushroom");
    bakePizza(3 ,"sausages");


    /*
        Here we can see that the name of these
        functions are same but their arguments

        are different. 

        This is function overload. 
        Same function name with different arguments
        passed while calling the function.
    */

    return 0;
}