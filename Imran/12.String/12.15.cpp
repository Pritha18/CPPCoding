// 12.15. Write a program that read two lines of text and add second line with first line

#include <iostream>
using namespace std;

int strLen(char str[]) {
	int index = 0;

	while(str[index]) {
		index++;
	}

	return index;
}

int stringLen(char* str) {
	int index;

	for (index = 0; str[index]; ++index);

	return index;
}

int main(int argc, char const *argv[])
{
	char firstLine[512];
    	char secondLine[512];
    
    	cout << "Enter the first line of text: ";
    	cin.getline(firstLine, sizeof(firstLine));
    
    	cout << "Enter the second line of text: ";
    	cin.getline(secondLine, sizeof(secondLine));

    	int len = stringLen(firstLine);
    	cout << "first string length is: " << len << endl;

    	int i;
    	for (i = 0; secondLine[i]; ++i) {
    		firstLine[len + i] = secondLine[i];
    	}
    	firstLine[len + i] = '\0';

    	cout << "After adding second line to first line: " << firstLine << endl;

	return 0;
}