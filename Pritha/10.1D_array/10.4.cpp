//10.4. Write a program that read an array and display maximum

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

    
    double max = array[0]; 

    for (int i = 1; i < arraySize; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    cout << "Maximum value in the array is: " << max << endl;

    return 0;
}
