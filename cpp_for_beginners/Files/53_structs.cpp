#include <iostream>

using namespace std;

struct students
{
    string name;
    double gpa;
    bool enrolled;
};

int main()
{
    /*
        Ques-> Struct:
        Ans->  A structure that group related variables under
        one name structs can contain many different data types
        (string, int)
        variables in a struct are known as "members"

        Members can be access with "." . Class members Access
        operation

        It is like out own personal data type.

        We created a data type with many other data types .
    */

   students student1;

   student1.name = "Spongebob";
   student1.gpa = 4.00;
   student1.enrolled = true;
    // accessed members with ".";

   cout << "student 1's name : " << student1.name << endl; 
   cout << "student 1's gpa : " << student1.gpa << endl; 
   cout << "student 1's enrolled : " << student1.enrolled << endl; 

    cout << endl;

   students student2;

   student1.name = "Patrick";
   student1.gpa = 3.9;
   student1.enrolled = false;

   cout << "student 2's name : " << student1.name << endl; 
   cout << "student 2's gpa : " << student1.gpa << endl; 
   cout << "student 2's enrolled : " << student1.enrolled << endl; 

    // We can create as many structures as we want .
    

    return 0;
}