//1.1.1 Write a program that reads and displays an array.


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

    cout << "The elements of the array are: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
