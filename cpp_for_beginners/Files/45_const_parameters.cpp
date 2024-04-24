#include <iostream>

using namespace std;

void printInfo(string name, int age)
{
    /*
        we can modify if we want

        we can do like this

        name = " ";
        age = 0;

        to prevent this we will see an example in
        another function.
    */

    name = "Nothing";
    age = 0;

    cout << "Without using const keyword: " << endl;
    cout << "Name: " << name << endl;
    cout << "Age : " << age << endl;
}

void printInfo_const(const string name, const int age)
{
    /*
        This const keyword will prevent from 
        changing the variable . 

        It is useful for making important 
        variables unchangable.

        like pi = 3.1416.

        We don't want this to change.
    */

    cout << "With using const keyword: " << endl;

    cout << "Name: " << name << endl;
    cout << "Age : " << age << endl;

    cout << "It remained unchanged." << endl;

    /*
        it will show an error even if we try to change the
        variable now.
    */
}

int main()
{
    /*
        const parameter :
            parameter that is effectively read only
            code is more secure and conveys intent
            useful for references and pointers
    */

    string name = "Bro";
    int age = 22;


    printInfo(name, age);

    cout << endl;

    printInfo_const(name, age);

    return 0;
}