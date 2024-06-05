/*7.8.
		1
		0 1
		1 0 1
		0 1 0 1
		1 0 1 0 1
*/



#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int num;
    cout << "Enter the value of num: ";
    cin >> num;

    cout << endl << endl;

    for (int row = 1; row <= num; row++) {
		for (int col = 1; col <= row; col++) {
			if((col + row) % 2 == 0) {
				cout << 1 << " ";
			} else {
				cout << 0 << " ";
			}
		}
		cout << endl;
	}


	return 0;
}