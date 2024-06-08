/*7.10.
		A
		A B
		A B C
		A B C D
		A B C D E
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
        for (int col = 1; col <= row; ++col) {
            cout << char(col + 'A' - 1) << " ";
        }
        cout << endl;
    }

    return 0;
}
