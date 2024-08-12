//14.28. Write a function that gets an array and product each element by 5

#include <iostream>
using namespace std;

void multiplyByFive(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] *= 5;
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

    multiplyByFive(arr, size);

    cout << "Array after multiplying each element by 5: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

