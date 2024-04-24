#include <iostream>

using namespace std;

void sort(int arr[], int size)
{
    int temp;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i -1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {12,1,4,22,5,3,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    sort(arr,size);

    for(int element : arr)
    {
        cout << element << " ";
    }

    return 0;
}