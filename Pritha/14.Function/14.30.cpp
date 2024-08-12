//14.30. Write a function that sorts an array Ascending


#include <iostream>
using namespace std;

void sortAscending(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i) //bubble sort
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[i] > arr[j])
            {
                //Swapping 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    sortAscending(arr, size);

    cout << "Array after sorting in ascending order: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
