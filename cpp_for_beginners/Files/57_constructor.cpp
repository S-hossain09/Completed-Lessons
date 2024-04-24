#include <iostream>

using namespace std;

class Student
{
    public:
        string name;
        int age;
        double gpa;

    Student(string name, int age, double gpa) // It is a constructor
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    /*
        Ques -> Constructor
        Ans -> Special method that is automatically
        called when an object is instantiated useful
        for assigning calues to attributes as 
        arguments


        A constructor has to have the same name as 
        the class.
    */

   Student student1("Spongebob", 22, 3.9);
   /*
    As we created an object.

    The constructor is also called and assigned 
    the attributes with it.
   */

   cout << "Student's name: " <<student1.name << endl;
   cout << "Student's age: " <<student1.age << endl;
   cout << "Student's gpa: " <<student1.gpa << endl;

    return 0;
}