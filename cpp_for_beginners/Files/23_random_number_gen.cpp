#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    /*
        The srand() function is used to seed the random number
        generator in the C standard library. The function takes
        an unsigned integer value as its argument,
        which is used to initialize the random number generator.
    */

    int num = rand();

    cout << "Now the num will print a very large number : " << endl;
    cout << num << endl;

    int num2 = rand() % 6;

    cout << "Now the num2 will print numbers from 0 to 5 " << endl;
    cout << num2 << endl;

    /*
        That is because we are using a % operator. 
        here whatever we give after this operator

        it will output the number from 0 upto that number. 
    */

    return 0;
}