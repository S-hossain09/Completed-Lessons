#include <iostream>
#include <iomanip>

using namespace std;

void show_Balance(double balance)
{
    system("clear");

    cout << "Your balance is: $" << setprecision(2) << fixed << balance << endl;
    cout << endl
         << endl;
}

double deposit()
{
    system("clear");

    double amount = 0;

    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if (amount > 0)
    {
        return amount;
    }

    else
    {
        cout << "That is not a valid amount.\n";
        return 0;
    }

    return amount;
}

double withdraw(double balance)
{
    system("clear");

    double amount = 0;

    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if (amount > balance)
    {
        cout << "Insufficient funds\n";
        return 0;
    }

    else if (amount < 0)
    {
        cout << "That is not a valid amount\n";
        return 0;
    }

    else
    {
        return amount;
    }
}

int main()
{

    system("clear");

    double balance = 23;
    int choice = 0;

    do
    {
        cout << "******************* Programmer's Bank *******************\n";

        cout << "Choose options below\n";

        cout << "1. Show Balace\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter (1,2,3,4): ";
        cin >> choice;

        cin.clear();
        fflush(stdin);
        /*
            cin.clear() followed by fflush(stdin),
            it's likely an attempt to clear the input
            buffer to prepare for new input


            Ques -> what is input buffer ?

            Ans -> 

            information needs to be stored temporarily
            before the computer can use it.
            The input buffer holds onto this information
            until the computer is ready to process it

        */


        switch (choice)
        {
        case 1:
            show_Balance(balance);
            break;

        case 2:
            balance += deposit();
            show_Balance(balance);
            break;

        case 3:
            balance -= withdraw(balance);
            show_Balance(balance);
            break;

        case 4:
            cout << endl;
            cout << "Thanks for visiting\n";
            break;

        default:
            cout << "Invalid Choice !!!\n";
            break;
        }
    } while (choice != 4);

    return 0;
}