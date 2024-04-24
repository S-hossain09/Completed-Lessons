#include <iostream>

using namespace std;

int main()
{
    /*
        Ques-> What is multi dimensional Arrays?

        Ans -> A multi dimensional arrays is a
        representation of datas with rows and
        columns, like matrix.
    */

    string cars[][3] = {{"Mustang", "Ferrari", "Audi"},
                        {"BMW", "Mitsubishi", "Mercedes"},
                        {"Ford", "Mazda", "Toyota"}};

    /*
            The structure of two dimensional arrays:

            data_type variable_name[rows][cols]
    */

    int rows = sizeof(cars) / sizeof(cars[0]);

    int example[][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    cout << "The size of entire arr is : " << sizeof(example) << endl;
    /*
        Because there are 9 elements and each int is 4 bytes so 4*9 = 36;
    */

    cout << "The size of the first row is : " << sizeof(example[0]) << endl;
    /*
        Because in first row there is 1,2,3 which is 3 elements.

        3*4 = 12
    */

    cout << "The number of rows : " << sizeof(example) / sizeof(example[0]) << endl;
    /*
     Because total arr size 36, each row has 12 bytes.
     so if we divide 36/12 we get 3.
    */

    return 0;
}