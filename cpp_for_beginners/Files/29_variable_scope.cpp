#include <iostream>

using namespace std;

int global_value = 42069;

void print_myNum()
{
    int myNum = 2;

    cout << endl << endl;

    cout << "Now we will try to print the same myNum variable. " << endl;
    cout << "that is in main function. The value of myNum is " << myNum << endl;

    cout << "It is actually not the one in main function " << endl;
    cout << "It is a local myNum variable in this function. " << endl;
}

void print_global_myNum()
{
    cout << endl << endl;

    cout << "Now we will try to print the global variable." << endl;
    cout << "The global value is " << global_value << endl;

    cout << "This global value is accessible in all functions" << endl;
}

int main()
{
    /*
        Local Variable.
            This variable is declared within a function.

        Global Variable.
            This variable is declared outside of all functions
            to able to use them in all functions when called.
    */

    int myNum = 1;

    cout << "This myNum variable is declared in main function." << endl;
    cout << "The value of myNum is " << myNum << endl;

    print_myNum();

    print_global_myNum();

    return 0;
}

