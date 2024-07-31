//12.10. Write a program that read any line of text and display every character with ASCII value in separate line


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char text[256];

    cout << "Enter a line of text: ";
    cin.getline(text, sizeof(text));

    cout << "Characters with their ASCII values:" << endl;
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        cout << ch << " -> " << int(ch) << endl;
    }

    return 0;
}
