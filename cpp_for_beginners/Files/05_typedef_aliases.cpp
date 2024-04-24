/*
    Ques -> What is typedef?

    Ans -> It is a reserved keyword used to create 
    an additional name for another data type.

    New Identifier for an existing type
    Helps with readability and reduces typos.
*/

#include <iostream>
// #include <vector> 

// typedef std::vector<std::pair<std::string, int >> pairlist_t;
/*
    It is much easier to write with typedef.
*/

// typedef std::string text_t;

using text_t = std::string;
/*
    It is more suitable than writing std::string every time 
*/


int main()
{
    // pairlist_t pairlist;
    text_t firstname = "Bro";
    // called the text_t 

    std :: cout << firstname<< '\n';

    return 0;
}