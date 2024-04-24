#include <iostream>

using namespace std;

void swap_pass_by_value(string x, string y)
{
    string temp;

    temp = x;
    x = y;
    y = temp;

    cout << "In swap function with pass by value: " << endl;

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    cout << "It swapped here." << endl;

    cout << "Now going back to back main function " << endl;
}

void swap_pass_by_reference(string &x, string &y)
{
    string temp;

    temp = x;
    x = y;
    y = temp;

    cout << "In swap function with pass by reference: " << endl;

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    cout << "It swapped here." << endl;

    cout << "Now going back to back main function " << endl;
}

int main()
{
    string x = "Kool-Aid";
    string y = "Water";
    string temp;

    temp = x;
    x = y;
    y = temp;

    cout << endl;
    cout << "In main function: " << endl;

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    cout << endl;

    /*
        This will result any change or anything
        in the main function.
    */

    /*
        Now lets create a swap variable function.
    */

   // Passed by value.

    swap_pass_by_value(x, y);
    /*
        Passed by value.

        Means we have created a copy of this variable
        in the swap_pass_by_value variable.

        That function uses that copy only and the
        changes apply to function only, the change
        is not applicable for other functions.
    */

    cout << endl;
    cout << "In main function: " << endl;

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    cout << "It didnt swap in main function." << endl;
    cout << endl;

    cout << "*****************************************" << endl;

    swap_pass_by_reference(x, y);

    cout << endl;
    cout << "In main function: " << endl;

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;

    cout << "It swap in main function as well ." << endl;

    /*
        If we use pass by reference .
        it makes the changes applicable for others as well.
    */
    return 0;
}