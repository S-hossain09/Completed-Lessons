#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int randNum = (rand() % 6) + 1;

    switch (randNum)
    {
    case 1:
        cout << "You win a Bumper Sticker !!!" << endl;
        break;
    
    case 2:
        cout << "You win a t-Shirt !!!" << endl;
        break;
    
    case 3:
        cout << "You win a free lunch !!!" << endl;
        break;
    
    case 4:
        cout << "You win a gift card !!!" << endl;
        break;
    
    case 5:
        cout << "You win a concert tickets !!!" << endl;
        break;
        
    default:
        cout << "Sorry. Better luck next time !!! " << endl;
        break;
    }

    return 0;
}