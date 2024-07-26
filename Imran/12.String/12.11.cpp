/*
	12.11. Write a program that read any line of text and display number of 
	uppercase, lowercase, digits, spaces and other characters
*/

#include <iostream>
// #define NULL 0 // we don't need these in modern compiler
using namespace std;

int main(int argc, char const *argv[])
{
	char promi[500]; // 500 size for safety

	cout << "enter a line of text: ";
	cin.getline(promi, sizeof(promi));

	int uppercaseCount = 0, lowercaseCount = 0;
	int digitsCount = 0, spacesCount = 0, otherCharCount = 0;

	// '\0' - NULL character
	// for (int i = 0; promi[i] != '\0'; ++i) {
	// 	if (promi[i] >= 'A' && promi[i] <= 'Z') {
	// 		uppercaseCount++;
	// 	} else if (promi[i] >= 'a' && promi[i] <= 'z') {
	// 		lowercaseCount++;
	// 	} else if (promi[i] >= '0' && promi[i] <= '9') {
	// 		digitsCount++;
	// 	} else if (' ' == promi[i]) {
	// 		spacesCount++;
	// 	} else {
	// 		otherCharCount++;
	// 	}
	// }

	// NULL pointer defined with compiler work as a null character in case of string
	// for (int i = 0; promi[i] != NULL; ++i) {
	// 	if (promi[i] >= 'A' && promi[i] <= 'Z') {
	// 		uppercaseCount++;
	// 	} else if (promi[i] >= 'a' && promi[i] <= 'z') {
	// 		lowercaseCount++;
	// 	} else if (promi[i] >= '0' && promi[i] <= '9') {
	// 		digitsCount++;
	// 	} else if (' ' == promi[i]) {
	// 		spacesCount++;
	// 	} else {
	// 		otherCharCount++;
	// 	}
	// }

	// null character always returns false
	for (int i = 0; promi[i]; ++i) {
		if (promi[i] >= 'A' && promi[i] <= 'Z') {
			uppercaseCount++;
		} else if (promi[i] >= 'a' && promi[i] <= 'z') {
			lowercaseCount++;
		} else if (promi[i] >= '0' && promi[i] <= '9') {
			digitsCount++;
		} else if (' ' == promi[i]) {
			spacesCount++;
		} else {
			otherCharCount++;
		}
	}

	cout << "uppercase character count: " << uppercaseCount << endl;
	cout << "lowercase character count: " << lowercaseCount << endl;
	cout << "digits character count: " << digitsCount << endl;
	cout << "spaces character count: " << spacesCount << endl;
	cout << "other character count: " << otherCharCount << endl;

	return 0;
}