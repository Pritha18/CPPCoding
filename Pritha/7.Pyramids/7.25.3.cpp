/*7.25.3.
			1
		      2   2
		    3   3   3
		  4   4   4   4
		5   5   5   5   5
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    cout << endl << endl;

    for (int row = 1; row <= num; ++row) {

        for (int i = 1; i <= num - row; ++i) {
            cout << " " << " " ;
        }

        for (int col = 1; col <= row; ++col) {
            cout << row << "   " ;
        }

        cout << endl;
    }

    return 0;
}