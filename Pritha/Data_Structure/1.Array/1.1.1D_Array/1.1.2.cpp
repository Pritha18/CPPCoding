//1.1.2 Write a program that reads an array and displays the sum of its elements.

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

    cout << "The sum of the elements is: " << sum << endl;

    return 0;
}
