/*7.12.
		5 5 5 5 5
		4 4 4 4
		3 3 3
		2 2
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

    for (int row = num; row >= 1 ; --row) {
        for (int col = 1; col <= row; ++col) {
            cout << row << " ";
        }
        cout << endl;
    }

    return 0;
}
