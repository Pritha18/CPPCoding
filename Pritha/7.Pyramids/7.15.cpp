/*7.15.
        6 7 8 9 10
        5 6 7 8
        4 5 6
        3 4
        2

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
        for (int col = row + 1; col <= row + row; ++col) {
            cout << col << " ";
            }

            cout << endl;  
        }

    return 0;
}