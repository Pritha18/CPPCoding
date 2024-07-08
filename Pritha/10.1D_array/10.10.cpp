//10.9. write a program that read and sort an array in discending order


#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) { 
                max_idx = j;
            }
        }

        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
