#include <iostream>

using namespace std;

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    // examples of break.
    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            break;
        }

        cout << i << " ";
    }

    cout << endl;
    cout << "It stopped at 13 and did not continue till the rest of the loop" << endl;

    cout << endl << endl;

    // examples of continue.
    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }

        cout << i << " ";
    }

    cout << endl;
    cout << "It will only skip the ones that are even " << endl;

    return 0;
}