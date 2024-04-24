#include <iostream>

using namespace std;

int main()
{
    /*
        Dynamic memory:
            Memory that is allocated after the program
            is already compiled & running.

            Use the 'new' operator to allocate memory
            in the heap rather than the stack

            Useful when we don't know how much memory
            we will need. Makes our program more
            flexible, especially when accepting user
            input.
    */

    int *pNum = nullptr;

    pNum = new int;

    *pNum = 21;

    cout << "Address of pNum: " << pNum << endl;
    cout << "Value of pNum: " << *pNum << endl;

    delete pNum;
    /*
     it will prevent memory leak

     Ques -> What is memory leak?
     Ans ->
         A memory leak occurs when programmers create
         a memory in a heap and forget to delete it.


    */

    /*
     The structure for dynamic memory allocation:

     new data_type;
      ^
     keyword
     for
     dynamic
     allocation
     in heap
     memory.


     this will store an address in the heap memory .
     and keep the memory available for later use.


     it is always a very good practice to delete the
     memory space when no longer is needed.
    */

    /*
      now lets create an array with user defined size.
    */

    int size;

    cout << "How many grades to enter in?: ";
    cin >> size;

    char *pGrades = nullptr;

    pGrades = new char[size];
    /*
                        ^
                        this
                        will
                        create
                        arr
                        of size
                        5
                        in heap
                        memory
    */

    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;
    /*
          ^
          this
          will
          delete
          arrays
          stored
          in heap
          memory
    */

    return 0;
}