// 12.1. Write a program that displays a string (single word)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char pritha[25];

	cout << "enter a single word: ";
	// cin is risky this don't check the boundary, which can lead to potential risks
	// but for single word we can use cin with safety concern in our head
	cin >> pritha;
	// cin.get(pritha, sizeof(pritha));

	cout << "entered word is: " << pritha << endl;

	return 0;
}