#include <iostream>

using namespace std;

int main()
{
    string foods[5];
    /*
    If we don't assign values at the time of declaration
    we have to give the array a fixed size.
    */

    int size = sizeof(foods) / sizeof(foods[0]);
    string temp;

    cout << "Enter some foods name or 'q' to quit " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "#" << (i + 1) << ": ";
        getline(cin, temp);

        if (temp == "q")
        {
            break;
        }

        else
        {
            foods[i] = temp;
        }
    }

    cout << "List of the foods are: " << endl;

    for (int i = 0; i < size; i++)
    {
        if (foods[i].empty())
        {
            break;
        }
        cout << foods[i] << "\n";
    }

    return 0;
}