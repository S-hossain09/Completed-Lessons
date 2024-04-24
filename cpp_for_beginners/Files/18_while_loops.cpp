#include <iostream>

using namespace std;

int main()
{
    string name;

    // if name is empty it will keep asking my name.
    while(name.empty())
    {
        cout << "Enter your name: ";
        getline(cin, name);
    }

    /*
        when name is not empty , it will exit from the loop
        and print this.
    */
    cout << "Hello " << name;

    return 0;
}