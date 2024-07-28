// 12.4. Write a program that converts a line to lowercase.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char pritha[512];
	cout << "enter the line of text: ";
	cin.getline(pritha, sizeof(pritha));

	cout << "given text: " << pritha << endl;

	for (int i = 0; pritha[i]; ++i) {
		if (pritha[i] >= 'A' && pritha[i] <= 'Z') {
			pritha[i] = pritha[i] + 32;
			// pritha[i] = pritha[i] - 'A' + 'a'
		}
	}

	cout << "lowercase text is: " << pritha << endl;

	return 0;
}