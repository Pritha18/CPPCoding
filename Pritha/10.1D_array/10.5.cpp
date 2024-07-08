//10.5. Write a program that read an array and display minimum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arraySize;
    cout << "Enter the array size: ";
    cin >> arraySize;

    double array[arraySize];

    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < arraySize; ++i) {
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }

    
    double min = array[0]; 

    for (int i = 1; i < arraySize; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    cout << "Minimum value in the array is: " << min << endl;

    return 0;
}
