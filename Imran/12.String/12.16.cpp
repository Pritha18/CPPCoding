// 12.16. Write a program that compares two strings

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char firstLine[512];
    	char secondLine[512];
    
    	cout << "Enter the first line of text: ";
    	cin.getline(firstLine, sizeof(firstLine));
    
    	cout << "Enter the second line of text: ";
    	cin.getline(secondLine, sizeof(secondLine));

    	int i;
    	bool isEqual = true;
    	for (i = 0; firstLine[i] && secondLine[i]; ++i) {
    		if (firstLine[i] != secondLine[i]) {
    			isEqual = false;
    			break;
    		}
    	}

    	// it means one of them is not finished
    	if(firstLine[i] || secondLine[i]) {
    		isEqual = false;
    	}

    	if (isEqual) {
    		cout << "The two lines are equal." << endl;
    	} else {
    		cout << "The two lines are not equal." << endl;
    	}

	return 0;
}