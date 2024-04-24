#include <iostream>

using namespace std;

int main()
{
    string question[] = {
        "1. What year was C++ created?: ",
        "2. Who invected C++?: ",
        "3. What is the predecessor of C++?: "};

    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                           {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C John Carmack", "D. Mark Zuckerbark"},
                           {"A. C", "B. C+", "C C--", "D. B++"}};

    char answerKey[] = {'C', 'B', 'A'};

    int size = sizeof(question) / sizeof(question[0]);
    char guess;
    int score = 0;


    for (int i = 0; i < size; i++)
    {
        cout << question[i] << endl;

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << " " << " ";
        }

        cout << endl;
        cout << "Enter: ";

        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i])
        {
            cout << "Correct\n";
            score++;
        }
        else
        {
            cout << "Not Correct\n";
            cout << "Answer : " << answerKey[i] << endl;
        }

        cout << endl << endl;
    }

     cout << "Your Score : " << score << " out of " << size << endl;

    return 0;
}