#include <iostream>

using namespace std;

class Stove
{
private:
    int inner_temp = 10;

public:
    int outer_temp = 0;
    /*
     As the attribute is public, we can change the value of it.
    */

    int get_inner_temp()
    {
        /*
            it is readable not writable.
        */
        return inner_temp;
    }

    void set_inner_temp(int temperature_change)
    {
        /*
            it is writable.
        */

        if (temperature_change < 0)
        {
            this->inner_temp = 0;
        }

        else if (temperature_change >= 10)
        {
            this->inner_temp = temperature_change;
        }

        else
        {
            this->inner_temp = temperature_change;
        }
    }
};

int main()
{
    /*
        Abstaction = Hiding unnecessary data from outside a class.
        getter = function that makes a private attribute READABLE
        setter = function that makes a private attribute WRITEABLE
    */

    Stove stove;

    stove.outer_temp = 1;
    /*
        we have changed it as it is public. to prevent it
        from happening we need to make it private .

        And this is known as abstraction.

        To only give access to data that is neccessary.
    */

    stove.set_inner_temp(4);

    cout << "The inner temperature of stove is " << stove.get_inner_temp() << endl;

    return 0;
}