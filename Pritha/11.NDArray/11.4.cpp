//11.4. Write a program that substract two matrices

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row, col;
    cout << "Please enter the number of rows and columns: ";
    cin >> row >> col;

    int matrix1[row][col], matrix2[row][col], difference[row][col];

    //first matrix
    cout << "Please enter the elements of the first matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "matrix1[" << i << "][" << j << "] = ";
            cin >> matrix1[i][j];
        }
    }

    //second matrix
    cout << "Please enter the elements of the second matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "matrix2[" << i << "][" << j << "] = ";
            cin >> matrix2[i][j];
        }
    }

    //Difference
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "The difference of the two matrices is:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << difference[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
