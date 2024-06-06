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

void confirmCharacterOperations();

int main(int argc, char const *argv[])
{
	int num;
        cout << "Enter the value of num: ";
        cin >> num;

        // confirmCharacterOperations();

        cout << endl << endl;
        

        for (int row = 1; row <= num; ++row) {
        	for (int col = 1; col <= row; ++col) {
                        // just ASCII thing
                        // similar to 1.9 and 1.10
                        // cout << char(row + 64) << " ";
        		cout << char(row + 'A' - 1) << " ";
        	}

        	cout << endl;
        }

	return 0;
}

void confirmCharacterOperations() 
{
        char ch = 'A'; // 65
        ch++; // 66

        cout << ch << endl;
}