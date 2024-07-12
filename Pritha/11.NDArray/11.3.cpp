//11.3. Write a program that adds two matrices


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int row, col;
    cout << "Please enter the number of rows and columns: ";
    cin >> row >> col;

    int matrix1[row][col], matrix2[row][col], sum[row][col];

    // Input for the first matrix
    cout << "Please enter the elements of the first matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "matrix1[" << i << "][" << j << "] = ";
            cin >> matrix1[i][j];
        }
    }

    // Input for the second matrix
    cout << "Please enter the elements of the second matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << "matrix2[" << i << "][" << j << "] = ";
            cin >> matrix2[i][j];
        }
    }

    // Summing the matrices
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output the sum matrix
    cout << "The sum of the two matrices is:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
