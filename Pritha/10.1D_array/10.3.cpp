//10.3. Write a program that read an array and display average

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

    double sum = 0;

    for (int i = 0; i < arraySize; ++i) {
        sum = sum + array[i];
    }

    double average = sum / arraySize;

    cout << "Average of the array is: " << average << endl;

    return 0;
}
