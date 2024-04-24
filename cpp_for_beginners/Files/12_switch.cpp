#include <iostream>

using namespace std;

int main()
{
    /*
        Switch = It is an alternative to using many if-else.

        It keeps the code more readable and clean.

        it takes one value and compares it.

    */

   int month;

   cout << "Enter the number of month (1-12) : ";
   cin >> month;

    switch (month)
    {
    case 1:
        cout << "It is January" << endl;
        break;
    
    case 2:
        cout << "It is February" << endl;
        break;
    
    case 3:
        cout << "It is March" << endl;
        break;
    
    case 4:
        cout << "It is April" << endl;
        break;
    
    case 5:
        cout << "It is May" << endl;
        break;
    
    case 6:
        cout << "It is June" << endl;
        break;
    
    case 7:
        cout << "It is July" << endl;
        break;
    
    case 8:
        cout << "It is August" << endl;
        break;
    
    case 9:
        cout << "It is September" << endl;
        break;
    
    case 10:
        cout << "It is October" << endl;
        break;
    
    case 11:
        cout << "It is November" << endl;
        break;
    
    case 12:
        cout << "It is December" << endl;
        break;
    
    default:
        cout << "Month number not entered correctly" << endl;
        // it is a default one. if none of the above is 
        // true then it will execute this by default.
        break;
    }

    /*
        it is a must to use break after every cases 
        or else it will execute the case which is true 
        and also the ones below it .
    */

    return 0;
}