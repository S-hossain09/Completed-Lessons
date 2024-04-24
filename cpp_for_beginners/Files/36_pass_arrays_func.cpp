#include <iostream>

using namespace std;

// double getTotal(double prices[])
// {
//     double total = 0;

//     for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
//     {
//         total += prices[i];
//     }

//     /*
//         This will not work properly because in the 
//         function it is receiving the pointer to the 
//         first element only.

//         this will not know the size of the array unless
//         the size is also passed in the function. 
//     */

//     return total;
// }

double getTotal2(double prices[], int size)
{
    double total = 0;

    for(int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    /*
        This will  work properly because in the 
        function it is receiving the pointer to the 
        first element and the size as well.

        the size is also passed in the function. 
    */

    return total;
}


int main()
{
    double prices[] = {49.88, 15.33, 22.22, 34, 99.99};

    int size = sizeof(prices)/sizeof(prices[0]);
    // double total = getTotal(prices);

    double total = getTotal2(prices,size);

    cout << "$" << total << endl;

    return 0;
}