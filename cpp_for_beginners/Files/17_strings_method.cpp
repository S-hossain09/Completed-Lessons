#include <iostream>

using namespace std;

int main()
{
    string name;

    // String length. 
    cout << "Enter your name : ";
    getline(cin >> ws, name);

    cout << endl;
    if(name.length() > 12)
    {
        cout << "Your name can't be over 12 characters";
    }

    else
    {
        cout << "Welcome " << name << endl << endl;
    }


    cout << "Showing some strings methods below :\n";


    // Checks if the string is empty or not 
    cout << endl << endl;
    cout << "#1 Checking if it is empty or not \n";
    if(name.empty())
    {
        cout <<"You didn't enter your name" << endl;
    }
    else
    {
        cout << "No it is not empty.\nIt has a beautiful name stored." << endl;
    }



    // Appending / Adding names
    cout << endl << endl;
    cout << "#2 Appending / Adding characters.\n";
    name.append(" extra_characters");
    cout << "Now we will see some extra characters after name." << endl;
    cout << name << endl;
    
    // at() , will show the character at that position.
    cout << endl << endl;
    cout << "#3 Seeing the characters by index / position \n";
    cout << "Let us see the first character of name . It is " << name.at(0) << endl;

    // It will insert chars at specific postion.
    cout << endl << endl;     
    cout << "#4 Inserting at specific position\n";
    name.insert(0, "@");
    cout << "Inserted @ at index 0 " << name << endl;

    // Finding specific characters and printing index.
    cout << endl << endl;
    cout << "#5 Finding specific characters and printing index\n";
    cout << "We will find where the h is . It is at " << name.find('h') << endl;

    // Erasing some part from the string 
    cout << endl << endl;
    cout << "#6 Performing erase operation below : \n";
    cout << "Now we will erase some portions from name. It becomes : " << name.erase(0,3) << endl;



    // clears what is stored in string variable
    cout << endl << endl;
    cout << "#7 Clearing string \n";
    name.clear();
    cout << "Hello " << name << ". There is nothing because \nwe cleared it." << endl;
    cout << endl;

    return 0;
}