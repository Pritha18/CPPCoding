//12.14. Write a program that read two lines of text and copy second line into first line

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
   
    for (int i = 0; i < sizeof(firstLine); ++i) {
        firstLine[i] = secondLine[i];
        if (secondLine[i] == '\0') {
            break;
        }
    }

    cout << "First line after copying the second line: " << firstLine << endl;

    return 0;
}
