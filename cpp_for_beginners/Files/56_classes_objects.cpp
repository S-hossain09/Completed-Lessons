#include <iostream>

using namespace std;

class Human
{
    public:
        string name;
        string occupation;
        int age;

        void eat()
        {
            cout << "Person is eating!!" << endl;
        }

        void drink()
        {
            cout << "Person is drinking!!" << endl;
        }

        void sleep()
        {
            cout << "Person is sleeping!!" << endl;
        }
};

int main()
{
    /*
        Ques -> Objects:
        ans -> 

        A collection of attributes and methods
        They can have characteristics and could perfom
        actions. Can be used to mimic real world items
        (Phone, book) .Created from a class which acts
        as a "Blue print"

        Ques -> Attributes:
        Ans -> Any variable that is bound in a class
        is a class attribute

        Ques -> Methods:
        Ans -> Any function defined within a class
        is a method .


        Class is more like a struct.
        
    */

   Human Me;
   /*    ^ 
        Me
        is
        an
        object
        of the
        class
        Human
   */


  Me.name = "No_One";
  Me.age = 0;
  Me.occupation = "nothing";

  Me.eat();
  Me.drink();
  Me.sleep();


    return 0;
}