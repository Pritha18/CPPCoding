//10.8. Write a program that searches any number from an array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    double list[100];
    int decision;
    int index = 0;

    // Insert numbers into the array
    while (true) {
        cout << "Do you want to insert any number in the array (1 for Yes, 0 for No): ";
        cin >> decision;

        if (0 == decision) {
            break;
        }

        double number;
        cout << "Enter the number that you want to insert: ";
        cin >> number;

        list[index++] = number;
    }

    cout << "Current array is: ";
    for (int i = 0; i < index; ++i) {
        cout << list[i] << " ";
    }
    cout << endl;

    // Delete numbers from the array
    while (true) {
        cout << "Do you want to delete any number from the array (1 for Yes, 0 for No): ";
        cin >> decision;

        if (0 == decision) {
            break;
        }

        double number;
        cout << "Enter the number that you want to delete: ";
        cin >> number;

        bool found = false;
        for (int i = 0; i < index; ++i) {
            if (list[i] == number) {
                found = true;
                for (int j = i; j < index - 1; ++j) {
                    list[j] = list[j + 1];
                }
                --index;
                break;
            }
        }

        if (found) {
            cout << "Number deleted successfully." << endl;
        } else {
            cout << "Number not found in the array." << endl;
        }

        cout << "Current array is: ";
        for (int i = 0; i < index; ++i) {
            cout << list[i] << " ";
        }
        cout << endl;
    }

    // Search for a number in the array
    while (true) {
        cout << "Do you want to search for any number in the array (1 for Yes, 0 for No): ";
        cin >> decision;

        if (0 == decision) {
            break;
        }

        double number;
        cout << "Enter the number that you want to search for: ";
        cin >> number;

        bool found = false;
        for (int i = 0; i < index; ++i) {
            if (list[i] == number) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "Number found in the array." << endl;
        } else {
            cout << "Number not found in the array." << endl;
        }
    }

    return 0;
}
