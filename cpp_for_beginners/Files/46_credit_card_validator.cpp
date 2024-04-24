#include <iostream>

using namespace std;

int getDigit(const int number)
{

    return (number % 10) + ((number / 10) % 10);
    /*
        if Number > 9:

        i.e 12
        number % 10 = 12 % 10 = 2
        ((number / 10) % 10) = (12 / 10) % 10 = (1) % 10 = 1
        (number % 10) + ((number / 10) % 10) = 2 + 1 = 3
        return 3.

        *****************************************************

        if Number <= 9:

        i.e 8
        number % 10 = 8 % 10 = 8
        return 8.
    */
}

int sumOddDigit(const string card_number)
{
    int sum = 0;

    for (int i = card_number.size() - 1; i >= 0; i -= 2)
    {
        sum += getDigit(card_number[i] - '0');
    }

    return sum;
}

int sumEvenDigit(const string card_number)
{

    int sum = 0;

    for (int i = card_number.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((card_number[i] - '0') * 2);
    }

    return sum;
}

int main()
{
    string cardNumber;
    int result = 0;

    cout << "Enter a credit card number : ";
    cin >> cardNumber;

    result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

    if(result % 10 == 0)
    {
        cout << cardNumber << " is valid" << endl;
    }

    else
    {
        cout << cardNumber << " is not valid" << endl;
    }

    return 0;
}