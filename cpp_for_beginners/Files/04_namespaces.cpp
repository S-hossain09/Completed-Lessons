/*
    Ques -> What is actaully namespace ?

    ans ->
        It actually provides a solution for preventing
        name conflicts in large porjects. Each entity 
        needs a unique name. A namespace allows for 
        identically names entities as long as the 
        namespace are different.
*/

#include <iostream>

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace first;

    
    int x = 0;

    std :: cout << x << std :: endl;
    /*
        it is printing the the value of x which is 
        in main function.
    */

    std :: cout << first::x;
    /*
        by using "first::" it is giving the priority to 
        the value of x which is in first. 
    */

    return 0;
}