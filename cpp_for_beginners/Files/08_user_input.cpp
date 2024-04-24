/*
    << (insertion Operator)
    >> (extraction Operator)
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int age;

    cout << "What is your age ?";

    cin >> age;
    /*
        it will only take string input that has no space.
    */

    cout << "Your age is : " << age << endl;

    cout << "Enter your full name : ";

    string full_name;

    getline(cin >> ws,full_name);
    /*
        it will take strings with spaces as well.
        
        ws -> white spaces. with "cin >> ws"
        it will take no input no newline as input
    */
   cout << full_name << endl;



    return 0;
}
