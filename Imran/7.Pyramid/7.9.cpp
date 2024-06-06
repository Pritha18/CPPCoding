/*
	7.9.
		A
		B B
		C C C
		D D D D 
		E E E E E
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
        cout << "Enter the value of num: ";
        cin >> num;

        cout << endl << endl;

        for (char row = 'A'; row <= 'A' + num - 1; ++row) {
        	for (char col = 'A'; col <= row; ++col) {
        		cout << row << " ";
        	}

        	cout << endl;
        }

	return 0;
}