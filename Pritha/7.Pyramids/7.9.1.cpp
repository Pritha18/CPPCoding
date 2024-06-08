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

        for (int row = 1; row <= num; ++row) {
                char value = 'A' + row - 1;
        	for (int col = 1; col <= row; ++col) {
        		cout << value << " ";
        	}

        	cout << endl;
        }

	return 0;
}