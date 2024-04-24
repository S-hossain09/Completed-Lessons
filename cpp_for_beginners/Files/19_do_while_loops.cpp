#include <iostream>

using namespace std;

int main()
{
    /*
        do while loop :

        It will do some block of code first,
        then repeat again if condition is true.

        means it will do first then it will go to
        the loop and check if the condition is valid
        or not
    */

    // cout << "Enter a positive #: ";
    // int number;
    // cin >> number;

    // while (number < 0)
    // {
    //     cout << "Enter a positive #: ";
    //     cin >> number;
    // }

    // cout << "The # is: " << number;

    /*
        Instead of doing this and writing
        Enter a positive # twice we can do
        like this.


        Because it will execute the condition in
        it first then we will check.
    */

    int number;

    do
    {
        cout << "Enter a positive #: ";
        cin >> number;
    } while (number < 0);

    return 0;
}