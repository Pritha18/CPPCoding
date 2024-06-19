/*                      1
                      1 2 1
                    1 2 3 2 1
                  1 2 3 4 3 2 1
                1 2 3 4 5 4 3 2 1
                  1 2 3 4 3 2 1
                    1 2 3 2 1
                      1 2 1
                        1
*/




#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    // Upper part of the pyramid
    for (int row = 1; row <= num; ++row) {        
        for (int space = 0; space < num - row; ++space) {
            cout << "  ";  
        }
       
        for (int col = 1; col <= row; ++col) {
            cout << col << " ";
        }

        for (int col = row - 1; col >= 1; --col) {
            cout << col << " ";
        }

        cout << endl;
    }

    // Lower part of the pyramid
    for (int row = num - 1; row >= 1; --row) {
        for (int space = 0; space < num - row; ++space) {
            cout << "  ";
        }

        for (int col = 1; col <= row; ++col) {
            cout << col << " ";
        }

        for (int col = row - 1; col >= 1; --col) {
            cout << col << " ";
        }

        cout << endl;
    }

    return 0;
}
