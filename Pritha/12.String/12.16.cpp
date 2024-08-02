//12.16. Write a program that compares two strings

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char firstLine[500];
    char secondLine[500];

    cout << "Enter the first line of text: ";
    cin.getline(firstLine, sizeof(firstLine));

    cout << "Enter the second line of text: ";
    cin.getline(secondLine, sizeof(secondLine));

    int i = 0;
    bool areEqual = true;

    while (firstLine[i] != '\0' || secondLine[i] != '\0') {
        if (firstLine[i] != secondLine[i]) {
            areEqual = false;
            break;
        }
        i++;
    }

    if (firstLine[i] != '\0' || secondLine[i] != '\0') {
        areEqual = false;
    }

    if (areEqual) {
        cout << "The two lines are equal." << endl;
    } else {
        cout << "The two lines are not equal." << endl;
    }

    return 0;
}



