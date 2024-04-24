#include <iostream>

using namespace std;

int searchArray(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(int);

    int index;

    int myNum;

    cout << "Enter number to search for : ";

    cin >> myNum;

    index = searchArray(numbers,size,myNum);

    if (index != -1)
    {
        cout << myNum << " is at index " << index << endl;
    }

    else
    {
        cout << myNum << " is not in the arr." << endl;
    }

    return 0;
}