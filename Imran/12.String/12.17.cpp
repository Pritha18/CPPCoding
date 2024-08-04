// 12.17. Write a program that compares two strings without case sensitivity

#include <iostream>
using namespace std;

void toLower(char* str) {
        for (int i = 0; str[i]; ++i) {
                if(str[i] >= 'A' && str[i] <= 'Z') {
                        str[i] = str[i] + 32;
                }
        }
}

void toUpper(char* str) {
        for (int i = 0; str[i]; ++i) {
                if(str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = str[i] - 32;
                }
        }
}

int main(int argc, char const *argv[])
{
	char firstLine[512];
    	char secondLine[512];
    
    	cout << "Enter the first line of text: ";
    	cin.getline(firstLine, sizeof(firstLine));
    
    	cout << "Enter the second line of text: ";
    	cin.getline(secondLine, sizeof(secondLine));

        toLower(firstLine);
        toLower(secondLine);
        
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