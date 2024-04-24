#include <iostream>

using namespace std;

int max(int x, int y)
{
    return (x > y) ? x : y;
}
/*
    we used this functions for int.

    but what If we used a double here ?
    Normally we can create a overloaded function
    that accepts a double.

    But to make it easier

    Here comes the functions templates.
*/

template <typename Thing>
Thing min_data(Thing x, Thing y)
{
    return (x < y) ? x : y;
}

template <typename Thing1,typename Thing2>
auto min_data_v2(Thing1 x, Thing2 y)
{
    return (x < y) ? x : y;
}
/*
    this will create two parameters in one functions.

    Thing1 is one data type
    Thing2 is another data type.

    and auto here the compiler decides what the return
    type of the function should be.
*/

int main()
{
    /*
        Function Templates :
            Describes what a function looks like.
            Can be used to generate as many
            overloaded functions as needed, each
            using different data types.
    */

    // cout <<"The value is for integer : " << max(1, 2) << "\n";

    cout <<"The value for integer: " << min_data(1, 2) << "\n";
    // It is an integer data type function


    cout <<"The value for double: " << min_data(1.2, 2.4) << "\n";
    // It is an double data type function


    cout <<"The value for char: " << min_data('9', '1') << "\n";
    // It is an char data type function

    cout <<"The value for mixed data type: " << min_data_v2('1',1) << "\n";
    // It is an char data type function



    return 0;
}