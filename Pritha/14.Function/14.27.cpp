//14.27. Write a function that gets an array and subtract 15 from each element


#include <iostream>
using namespace std;

void subtractFifteen(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] -= 15;
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

    subtractFifteen(arr, size);

    cout << "Array after subtracting 15 from each element: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
