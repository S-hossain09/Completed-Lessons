#include <iostream>

using namespace std;

int main()
{
    /*
        Ques -> what is array ?
        Ans -> a data structure that can hold multiple values
        that are accessed by an index number

        "kind of like a variable that hold multiple values"
    */

    string cars[] = {"Corvette", "Mustang", "Carry"};

    cout << cars;
    /*
     this will print the first index address or the
     address of the whole array.
    */

   cout << endl;
   
   cout << cars[0];
    /*
        This will print the first element of the array
        i.e Corvette in our case.

        Every array starts with 0 as first element. 
        0 is the starting element of the array.
    */

   /*
    Array contains datas of same type.

    In our case cars will not store anything but string.
  
    The size of arrays needs to be declared along with
    the array. It is a static ds. So size is need to be 
    declared earlier.
   */


    return 0;
}