/*7.16.
        5 6 7 8 9
        4 5 6 7
        3 4 5
        2 3
        1

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
        for (int col = row; col < row + row; col++) {
            cout << col << " ";  
        }
        cout << endl;  
    }

    return 0;
}