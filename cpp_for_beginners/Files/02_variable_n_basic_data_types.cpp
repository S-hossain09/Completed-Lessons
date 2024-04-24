#include <iostream>

int main()
{
    int x = 5;
    // int - integer .
    /*
        it is declared for example int x

        it is assigned for example = 5
    */

    int y = 6;

    std::cout << x << '\n';
    std::cout << y << '\n';

    int age = 45;
    int year = 2024;
    std::cout << age << " " << year;

    //double (number that has decimals)
    double price = 6.9;

    // single character like 'a','b','c'.....
    char grade = 'A';

    // boolean (true or false)
    bool student = true;


    /*
        string(obejct that represents a sequence of
        single characters.)

    */
    std:: string example = "love";
    /*
        Here a confusion that might arise is 
        
        Ques -> Why do we have to use std:: to declare a string ?
        Why can't we use string like any other data types?

        ans ->
        
        1) String is a part of the Standard Template 
        library(stl), it is not like any other built data
        types i.e int , double.

        2) std::string class manages memory allocation
        and dellocation automatically, ensuring efficient
        usage and preventing memory leaks.
    */

    std :: cout << '\n';

    std :: cout << example << '\n';

    return 0;
}