#include <iostream>

using namespace std;

void Hello_Love();
// We declare the function before main function.

/*
    void is the return type of the function.

    we can return whatever data types we want to 
    return .

    like strings, int, char etc.
*/

void HappyBirthday()
{
    cout << "Happy Birthday to you" << endl;
}

void Func_with_para(string name)
{
    cout << "Hello " << name << endl;
}
/*
    Here we have passed an argument 
    in to the function. 

    it is a string type argument.
*/

int main()
{
    HappyBirthday();
    HappyBirthday();
    HappyBirthday();

    Hello_Love();
    
    Func_with_para("Dude");


    /*
        The function that calls another function
        is know as calling function.

        So main function is a calling function.
    */

    /*
        The function that is called by other function
        is known as called functions.

        In this case it is HappyBirthday function.
    */

    return 0;
}

/*
    In this case we are defining the function after main 
    function.


    so we have to declare the function before main function. 
*/
void Hello_Love()
{
    cout << "Hey sweet love " << endl;
}