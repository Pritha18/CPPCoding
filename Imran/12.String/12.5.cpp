// 12.5. Write a program that read a line of text and display it's length
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char pritha[512];
	cout << "enter the line of text: ";
	cin.getline(pritha, sizeof(pritha));

	int length = 0;

	while(pritha[length]) {
		length++;
	}

	for(; pritha[length]; ++length) { }

	cout << "length of the text is: " << length << endl;

	return 0;
}