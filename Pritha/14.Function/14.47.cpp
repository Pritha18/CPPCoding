//14.47. Write a function that gets two string and concatenates (adds) them

#include <iostream>
using namespace std;

int strLen(char str[]) {
    int index = 0;
    while (str[index]) {
        index++;
    }
    return index;
}

int stringLen(char* str) {
    int index;
    for (index = 0; str[index]; ++index);
    return index;
}

void addLines(char firstLine[], char secondLine[]) {
    int len = stringLen(firstLine);
    int i;
    for (i = 0; secondLine[i]; ++i) {
        firstLine[len + i] = secondLine[i];
    }
    firstLine[len + i] = '\0';
}

void displayResult(const char line[]) {
    cout << "Resulting string: " << line << endl;
}


int main(int argc, char const *argv[]) 
{
    char firstLine[512];
    char secondLine[512];
    
    cout << "Enter the first line of text: ";
    cin.getline(firstLine, sizeof(firstLine));
    
    cout << "Enter the second line of text: ";
    cin.getline(secondLine, sizeof(secondLine));
    
    addLines(firstLine, secondLine);
    
    cout << "After adding second line to first line: ";
    displayResult(firstLine);

    return 0;
}
