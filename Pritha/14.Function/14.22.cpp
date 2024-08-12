//14.22. Write a function that gets an array and returns sum


#include <iostream>
using namespace std;

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
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

    int sum = arraySum(arr, size);
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
