//1.1.5 Write a program that reads an array and finds the minimum element.

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

    int minElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "The minimum element is: " << minElement << endl;

    return 0;
}
