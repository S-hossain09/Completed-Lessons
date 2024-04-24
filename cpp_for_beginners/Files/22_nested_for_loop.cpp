#include <iostream>

using namespace std;

int main()
{
    /*
        Nested Loop :

        It is a loop inside a loop.

        Every outer line will execute the
        inner line of the loop.
    */

   int rows;
   int columns;
   char symbol;

    cout << "How many rows?: ";
    cin >> rows;

    cout << "How many columns?: ";
    cin >> columns;

    cout << "Enter a symbol to use: ";
    cin >> symbol;

    for(int i = 1; i<= rows; i++)
    {
        for(int j = 1; j<=columns; j++)
        {
            cout << symbol << " ";
        }

        cout << "\n";
    }

    /*
    Every Row will print the symbol in the column. 
    then when it meets the last number of rows .
    it will stop and go to next row
    */

    return 0;
}