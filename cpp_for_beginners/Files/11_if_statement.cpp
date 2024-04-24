#include <iostream>

using namespace std;

int main()
{
    /*
        if statement changes the direction of code .
        if it is true it performs some action.
        if it is false it performs other actions.
    */

    int age;

    cout << "Enter age: ";

    cin >> age;

    if(age <= 18)
    {
        cout << "Welcome to the site !!!" << endl;
    }

    else if(age < 0)
    {
        cout << "User hasn't borned yet !!!" << endl;
    }

    else
    {
        cout << "You are too old !!!" << endl;
    }

    return 0;
}