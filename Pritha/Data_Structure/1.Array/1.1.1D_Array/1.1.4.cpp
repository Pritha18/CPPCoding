//1.1.4 Write a program that reads an array and finds the maximum element.

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

    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "The maximum element is: " << maxElement << endl;

    return 0;
}
