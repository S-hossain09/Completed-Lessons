#include <iostream>

using namespace std;

int main()
{
    /*
        sizeof()

        determines the size in bytes of a:
            1) Variable
            2) data type
            3) class
            4) Objects
            etc
    */

    double gpa = 2.5;

    cout << "Here this will print the size of gpa : ";
    cout << sizeof(gpa) << " bytes\n";
    // as we know double is of 8 bytes.

    string name = "Susie susan";

    cout << "Here this will print the size of string : ";
    cout << sizeof(name) << " bytes\n";
    /*
        it is 32 bytes. because string holds the
        address of the first element of char arrays.

        so it will print only the bytes of the address.
        i.e 32 bytes.
    */

    char grades[] = {'a', 'b', 'c', 'd'};

    cout << "The number of elements in the grades are : " << sizeof(grades) / sizeof(char) << endl;

    /*
        We can get the number of elements by
        dividing the whole size with data type.
    */


    return 0;
}