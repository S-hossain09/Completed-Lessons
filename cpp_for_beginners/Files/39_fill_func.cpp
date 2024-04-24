#include <iostream>

using namespace std;

int main()
{
    /*
        Fills a range of elements with specified value.

        the structure of fill is 

        fill(begin, end , value)

        it will fill the begin to end with values that is 
        passed in fill function.
    */

   int values[100];

   // we have declared an array of 100 sizes .

   // now we will fill the index with specific values

   fill(values, values + 100, 1);

   for(auto it : values)
   {
    cout << it << " ";
   }

   string example[100];

   fill(example, example + 100, "test");

    cout << endl;

    for(auto it : example)
   {
    cout << it << endl;
   }

   return 0;
}