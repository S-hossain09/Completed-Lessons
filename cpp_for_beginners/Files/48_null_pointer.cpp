#include <iostream>

using namespace std;

int main()
{
    /*
        Null value:
            A special value that means something that has
            no value.
            When a pointer is holding a null value,
            that pointer is not pointing at anything
            (null pointer)

        nullptr = keyword represents a null pointer literal

        nullptrs are helpful when determining if an address
        was successfully assigned to a pointer
    */

    int *pointer = nullptr;

    int x = 123;

    // pointer = &x;

    if (pointer == nullptr)
    /*
        it will help us see if the pointer is pointing 
        towards any address or anything.
    */
    {
        cout << "Pointing towards nothing" << endl;
        
    }

    else
    {
        cout << pointer << endl;
        cout << *pointer << endl;
    }

    return 0;
}