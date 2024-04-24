#include <iostream>

using namespace std;

enum Day
{
    Sunday = 0,
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6
};

// this string will now have an integer value assigned.

int main()
{
    /*
        Ques -> Enums.
        Ans -> A user defined data type that consists
        of paired named-integer constants .

        Great if we have a set of potential options.
    */

    // string today = "Sunday";

    /*
    switch (today)
    {
    case "Sunday":
        cout << "It is Sunday!!" << endl;
        break;

    case "Monday":
        cout << "It is Monday!!" << endl;
        break;

    case "Tuesday":
        cout << "It is Tuesday!!" << endl;
        break;

    case "Wednesday":
        cout << "It is Wednesday!!" << endl;
        break;

    case "Thursday":
        cout << "It is Thursday!!" << endl;
        break;

    case "Friday":
        cout << "It is Friday!!" << endl;
        break;

    case "Saturday":
        cout << "It is Saturday!!" << endl;
        break;

    default:
        break;
    }
    */

    /*
     Normally we can't use string inside switches.

     Ques -> Why?

     Ans -> The index in a switch statement must
     be an integer, which includes an integer
     expression.

     Also C/C++ doesn't really support strings as
     a type.


    */

    Day today = Sunday;
    /*
        Instead of working with strings to use in
        the switch catches . We will use enums
        where we have assigned the strings to an
        integer values.
    */

    switch (today)
    {
    case Sunday:
        cout << "It is Sunday!!" << endl;
        break;

    case Monday:
        cout << "It is Monday!!" << endl;
        break;

    case Tuesday:
        cout << "It is Tuesday!!" << endl;
        break;

    case Wednesday:
        cout << "It is Wednesday!!" << endl;
        break;

    case Thursday:
        cout << "It is Thursday!!" << endl;
        break;

    case Friday:
        cout << "It is Friday!!" << endl;
        break;

    case Saturday:
        cout << "It is Saturday!!" << endl;
        break;

    default:
        break;
    }
    return 0;
}