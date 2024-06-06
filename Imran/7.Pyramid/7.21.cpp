/*
	7.21.

			1
		      1 2
		    1 2 3
		  1 2 3 4
		1 2 3 4 5
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
        		cout << col << " ";
        	}

        	cout << endl;
        }

	return 0;
}