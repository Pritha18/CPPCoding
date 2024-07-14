//11.4. Write a program that multiply two matrices


#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int row1, col1, row2, col2;

    cout << "Please enter the number of rows and columns for the first matrix: ";
    cin >> row1 >> col1;

    
    cout << "Please enter the number of rows and columns for the second matrix: ";
    cin >> row2 >> col2;

    int matrix1[row1][col1], matrix2[row2][col2], product[row1][col2];

    //first matrix
    cout << "Please enter the elements of the first matrix:" << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            cout << "matrix1[" << i << "][" << j << "] = ";
            cin >> matrix1[i][j];
        }
    }

    //second matrix
    cout << "Please enter the elements of the second matrix:" << endl;
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << "matrix2[" << i << "][" << j << "] = ";
            cin >> matrix2[i][j];
        }
    }

    if (col1 != row2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    //product matrix to zero
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            product[i][j] = 0;
        }
    }

    //multiplication
    // why we are connecting i with row1?
    // because, this will be the first part of product matrix dimention
    for (int i = 0; i < row1; ++i) {
        // why we are connecting j with col2?
        // because, this will be the second part of product matrix dimention
        for (int j = 0; j < col2; ++j) {
            // why we are connecting k with col1?
            // actually we can connect k with col1 and row2
            for (int k = 0; k < col1; ++k) {
                // i j indicating the dimention of product matrix
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    product[0][0] = matrix1[0][0] * matrix2[0][0] + matrix1[0][1] * matrix2[1][0];

    cout << "The product of the two matrices is:" << endl;
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
