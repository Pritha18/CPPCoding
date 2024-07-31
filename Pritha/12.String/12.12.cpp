/*
       12.12. Write a program that read any line of text and display number of vowels, consonants, 
       digits, spaces and other characters 
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char promi[500];
    cout << "Enter a line of text: ";
    cin.getline(promi, sizeof(promi));

    int vowelsCount = 0, consonantsCount = 0;
    int digitsCount = 0, spacesCount = 0, otherCharCount = 0;

    for (int i = 0; promi[i]; ++i) {
        char ch = promi[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelsCount++;
            } else {
                consonantsCount++;
            }
        } else if (ch >= '0' && ch <= '9') {
            digitsCount++;
        } else if (ch == ' ') {
            spacesCount++;
        } else {
            otherCharCount++;
        }
    }

    cout << "Vowels character count: " << vowelsCount << endl;
    cout << "Consonants character count: " << consonantsCount << endl;
    cout << "Digits character count: " << digitsCount << endl;
    cout << "Spaces character count: " << spacesCount << endl;
    cout << "Other character count: " << otherCharCount << endl;

    return 0;
}
