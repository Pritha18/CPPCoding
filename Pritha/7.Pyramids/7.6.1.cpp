/*7.6.1
		1
		2 3
		3 4 5
		4 5 6 7

*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    cout << endl << endl;

    for (int row = 1, start = 1; row <= num; row++) {
        for (int col = 0; col < row; col++) {
            cout << (start + row - 1 + col) << " ";  
        }
        cout << endl;  
    }

    return 0;
}