//14.25. Write a function that gets an array and returns minimum

#include <iostream>
using namespace std;

int arrayMin(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
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

    int min = arrayMin(arr, size);
    cout << "The minimum element in the array is: " << min << endl;

    return 0;
}
