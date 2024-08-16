//14.23. Write a function that gets an array and returns average

#include <iostream>
using namespace std;

double average(double array[], int arraySize) {
    double sum = 0;

    for (int i = 0; i < arraySize; ++i) {
        sum += array[i];
    }

    return sum / arraySize;
}

int main(int argc, char const *argv[]) {
    int arraySize;
    cout << "Enter the array size: ";
    cin >> arraySize;

    double array[arraySize];

    cout << "Enter the array elements:" << endl;

    for (int i = 0; i < arraySize; ++i) {
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }

    double average = average(array, arraySize);

    cout << "Average of the array is: " << average << endl;

    return 0;
}
