#include <iostream>

using namespace std;

int main()
{
    string name = "Bro";
    int age = 22;
    bool student = true;

    cout << "Address of name variable : " << &name << "\n";
    /*
    This variable like name exist in computer memory.

    With this & sign we can get to the address
    where the variable is stored.

    We will see some random numbers on our computer
    screen after printing this.

    That is the hexadecimal number representing the
    address.

    It will change every time we run this program.
    */

    cout << "Address of age variable : " <<  &age << "\n";
    cout << "Address of student variable : " << &student << "\n";

    

    return 0;
}