#include <iostream>

using namespace std;

int main()
{
    /*
        Pointers :
            variable that stores a memory address of another variable

        & address of operator
        * dereference operator


    */

    /*
        The structure of pointer is :

        data_type *variable_name = &variable
                  ^                ^
               deference        address
               sign             of sign
               pointing         provides
               towards          the
               the              address
               address          of
               of               the
               the              variable
               variable
    */

    string name = "Bro";

    string *pName = &name;

    cout << name << endl;
    cout << pName << endl;
    /*
        It will print the address of where the variable
        is stored in the memory
    */

    cout << *pName << endl;
    /*
        It will print the value that is stored in this
        pointer. if we use derefencing sign
    */

    return 0;
}