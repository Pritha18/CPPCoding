//14.24. Write a function that gets an array and returns maximum


#include <iostream>
using namespace std;

int arrayMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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

    int max = arrayMax(arr, size);
    cout << "The maximum element in the array is: " << max << endl;

    return 0;
}
