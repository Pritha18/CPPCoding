//12.9. Write a program that read any line of text and display every character in separate line

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char text[256];

    cout << "Enter a line of text: ";
    cin.getline(text, sizeof(text));

    cout << "Characters displayed on separate lines:" << endl;
    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i] << endl;
    }

    return 0;
}
