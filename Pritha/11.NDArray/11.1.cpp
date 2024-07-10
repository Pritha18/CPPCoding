//11.1. Write a program that read and display read and display a 2D array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int pritha[3][3];
    float promi[4][2];
    double imran[4][5];
    char sakib[2][3][2];

    // Input and display for pritha array
    cout << "Enter values for pritha array (3x3):" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> pritha[i][j];
        }
    }

    cout << "pritha array:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << pritha[i][j] << " ";
        }
        cout << endl;
    }

    //promi array
    cout << "Enter values for promi array (4x2):" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> promi[i][j];
        }
    }

    cout << "promi array:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << promi[i][j] << " ";
        }
        cout << endl;
    }

    //imran array
    cout << "Enter values for imran array (4x5):" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> imran[i][j];
        }
    }

    cout << "imran array:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << imran[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
