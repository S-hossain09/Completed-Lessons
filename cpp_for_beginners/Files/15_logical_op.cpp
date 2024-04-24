#include <iostream>

using namespace std;

int main()
{
    /*
        Ques-> What are logical Operators ?
        Ans ->
        Logical operators are used to check
        whether an expression is True or False


        ** && = checks if two conditions are true.
        if both are true it executes something
        if both are not true or one is false then it
        will not execute .

        ** || = checks if at least one of the two conditions
        is true. If one is false and one is true it will still
        execute . But if both of the conditions is false . it
        not execute.

        ** ! = reverses the logical state of its operand.
        suppose if the condition is true, it will reverse the
        condition and vice versa.
    */

    int temp;

    cout << "Enter the temperature : ";
    cin >> temp;

       if(temp > 0 && temp < 30) /*it will check if it is betn 0 to 30*/
       {
        cout << "The temperature is good!" << endl;
       }
       else
       {
        cout << "The temperature is bad" << endl;
       }

    int num = 10;

    // Checking if num is greater than 5 OR less than 0
    if (num > 5 || num < 0)
    {
        cout << "Either num is greater than 5 or less than 0." << endl;
    }
    else
    {
        cout << "Num is not greater than 5 and not less than 0." << endl;
    }

    bool sunny = false;

    if(!sunny) // checks if it is true or false.
    {
        cout << "It is not sunny" << endl;
    }

    else
    {
        cout << "It is sunny" << endl;
    }

    return 0;
}