/*7.17.
        0 1 0 1 0
        1 0 1 0
        0 1 0
        1 0
        0



*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    cout << endl << endl;

    for (int row = num; row >= 1; --row) {
        for (int col = 1; col <= row; col++) {
            if ((row + col) % 2 == 0) {
                cout << 0 << " ";
            } else {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }


    return 0;
}