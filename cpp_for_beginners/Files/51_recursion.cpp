#include <iostream>

using namespace std;

void walk(int steps)
{
    // Iterative approaches
    cout << endl;
    for (int i = 0; i < steps; i++)
    {
        cout << "Steps number #" << (i + 1) << endl;
    }
    cout << endl;
}

void modernWalk(int steps)
{
    // Recursive approaches
    if (steps > 0)
    /*
        if there was not this condition 
        it will end up as an infinity loop

        it will not stop anywhere.
        and it will cause a stack overflow.
    */
    {
        cout << "Steps number #" << steps << endl;
        modernWalk(steps - 1);
    }

}

int main()
{
    /*
        recursion = a programming technique where a
        function invokes itselt from within
        break a complex concept into a repeatable
        single step

        Approaches:
        * iterative
        * recursive

        advantages:
        * less code and is cleaner
        * useful for sorting and searching algorithms

        disadvantages:
        * uses more memory
        * slower

    */

    walk(10);
    cout << endl;

    modernWalk(10);
    cout << endl;

    return 0;
}