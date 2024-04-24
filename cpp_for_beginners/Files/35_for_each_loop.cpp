#include <iostream>

using namespace std;

int main()
{
    /*
        For each loop

        Loops that eases the traversal over an iterable
        data set
    */

    string students[] = {"Spongebob", "Patrick", "Squidward"};

    for (int i = 0; i < 3; i++)
    {
        cout << students[i] << " ";
    }

    /*
     In this way we can iterate through arrays .
     but there is a more easy way to iterate.
    */

    /*
    The more easy way is given below:
    */

   cout << endl;

   for(string it : students)
   {
    cout << it << " ";
   }

   /*
    The structure of for each loop is given below:

        for(data_type variable_name : Iterable_data)
        for(string it : students)

        here the it is directly accessing the data.
        for that reason instead it[0] 

        we are writing just it for printing the
        value.

        instead of giving the data_type 
        we can write auto, to automatically detect
        the data_type of the variable.

        for(auto variable_name : Iterable_data)
   */



    return 0;
}