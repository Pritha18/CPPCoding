// 12.3. Write a program that converts a line to uppercase.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char pritha[512];
	cout << "enter the line of text: ";
	cin.getline(pritha, sizeof(pritha));

	cout << "given text: " << pritha << endl;

	for (int i = 0; pritha[i]; ++i) {
		if (pritha[i] >= 'a' && pritha[i] <= 'z') {
			pritha[i] = pritha[i] - 32;
			// pritha[i] = pritha[i] - 'a' + 'A'
		}
	}

	cout << "uppercase text is: " << pritha << endl;

	return 0;
}