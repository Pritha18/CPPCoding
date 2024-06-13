/*7.30.
		1
		2 2
		3 3 3
		4 4 4 4
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

    
    for (int row = 1; row <= num; ++row) {
        for (int col = 1; col <= row; ++col) {
            cout << row << " ";
        }
        cout << endl;
    }

    
    for (int row = num - 1; row > 0; --row) {
        for (int col = 1; col <= row; ++col) {
            cout << row << " ";
        }
        cout << endl;
    }

    return 0;
}
