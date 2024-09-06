//16.15. Write a void function that gets an array and find average, 
//then display the result within main function.

#include <iostream>
using namespace std;

void calculateAverage(int *arr, int size, double *average) {
    int sum = 0;
    
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    
    if (size > 0) {
        *average = (double)(sum) / size;
    } else {
        *average = 0; 
    }
}

int main(int argc, char const *argv[]) {
    int size;
    
    cout << "Enter the number of elements: ";
    cin >> size;
    
    int *arr = new int[size];
    double average;
    
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    
    calculateAverage(arr, size, &average);
    
    cout << "The average is: " << average << endl;

    delete[] arr; // class...need explanation
    
    return 0;
}
