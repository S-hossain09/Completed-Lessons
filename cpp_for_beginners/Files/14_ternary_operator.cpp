#include <iostream>

using namespace std;

int main()
{
    /*
        Ternary Operator ?: = it is replacement of If else statement.

        the structure of ternary operator is

        Condition ? expression1 : expression2;

        if true it will execute expression2
        if false it will execute expression1
    */

    int number = 9;

    number % 2 == 1 ? cout << "It is Odd " << endl : cout << "It is not even " << endl;
    /*
        We can write this instead as an alternative.

        cout << (number % 2 == 1 ? "Odd \n" : "Even \n");

    */

    return 0;
}