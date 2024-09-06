//1.1.3 Write a program that reads an array and displays the average of its elements.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    double average = (double)(sum) / n;
    cout << "The average of the elements is: " << average << endl;

    return 0;
}
