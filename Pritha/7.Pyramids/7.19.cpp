/*7.19.
		E E E E E
		D D D D
		C C C
		B B
		A
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
        	for (int col = 1; col <= row; ++col) {
                        cout << char(row + 'A' - 1) << " ";
        	}

        	cout << endl;
        }

	return 0;
}