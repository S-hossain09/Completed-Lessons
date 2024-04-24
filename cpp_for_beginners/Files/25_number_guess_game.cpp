#include <iostream>

using namespace std;

int main()
{

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = (rand() % 10) + 1;

    cout << "****************Number Guessing Game****************" << endl
         << endl;

    do
    {
        cout << "Enter a guess between (1 - 10): ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << endl;
            cout << "The guessed number is high" << endl;
        }

        else if (guess < num)
        {
            cout << endl;
            cout << "The guessed number is low" << endl;
        }

        else
        {
            cout << endl;
            cout << "Correct !! # of tries: " << tries << endl;
        }

    } while (guess != num);

    cout << endl;
    cout << "The number was " << num << endl;
    cout << "*************** END ***************";

    return 0;
}