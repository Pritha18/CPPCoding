//14.26. Write a function that gets an array and adds 10 to each element


#include <iostream>
using namespace std;

void addTen(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] += 10;
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

    addTen(arr, size);

    cout << "Array after adding 10 to each element: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
