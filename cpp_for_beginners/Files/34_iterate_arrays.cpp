#include <iostream>

using namespace std;

int main()
{
    string students[] = {"Spongebob", "Patrick", "Squidward"};

    for (int i = 0; i < 3; i++)
    {
        cout << students[i] << " ";
    }
    /*
        It will start from the beginning and continue
        upto the length of the string / array.

        But it is not the optimized solution.

        Because if we modify the string and add or remove
        any element we have to change the condition in for
        loop.
    */

    /*
    Below is an optimized solution
    */

   cout << endl;

   for(int i = 0; i < sizeof(students)/sizeof(string); i++)
   {
    cout << students[i] << " ";
   }

   /*
    In this we will not have to change the condition every 
    time we modify the string. It will automatically 
    detect the size.
   */

    return 0;
}