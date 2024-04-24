#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice()
{
    char player;

    cout << "Rock Paper Scissors Game!\n";
    cout << "*************************\n";

    do
    {
        cout << "\n";
        cout << "Choose one of the following:\n";

        cout << "'r' for rock\n";
        cout << "'p' for paper\n";
        cout << "'s' for scissors\n";
        cout << "Enter (r,p,s) : ";

        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice()
{
    srand(time(NULL));

    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 'r';
        break;
    
    case 2: return 'p';
        break;
    
    case 3: return 's';
        break;
    
    // default:
    //     break;
    }

    return 0;
}

void showChoice(char choice)
{

    switch (choice)
    {
    case 'r' : cout << "Rock\n"; 
        break;
    
    case 'p' : cout << "Paper\n"; 
        break;
    
    case 's' : cout << "Scissors\n"; 
        break;
    
    // default:
    //     break;
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r': 
        if(computer == 'r')
        {
            cout << "It's a tie!!\n";
        }

        else if(computer == 'p')
        {
            cout << "You loose!!\n";
        }

        else
        {
            cout << "You Win!!\n";
        }
        break;
    
    case 'p': 
        if(computer == 'p')
        {
            cout << "It's a tie!!\n";
        }

        else if(computer == 's')
        {
            cout << "You loose!!\n";
        }

        else
        {
            cout << "You Win!!\n";
        }
        break;
    
    case 's': 
        if(computer == 's')
        {
            cout << "It's a tie!!\n";
        }

        else if(computer == 'r')
        {
            cout << "You loose!!\n";
        }

        else
        {
            cout << "You Win!!\n";
        }
        break;
    
    default:
        break;
    }
}

int main()
{
    system("clear");

    char player;
    char computer;

    player = getUserChoice();

    cout << endl;

    cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();

    cout << endl;

    cout << "Computer's choice: ";
    showChoice(computer);

    cout << endl;

    chooseWinner(player, computer);

    return 0;
}