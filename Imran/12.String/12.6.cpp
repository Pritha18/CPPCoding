//12.6. Write a program that read a line of text and display it in reverse order


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char pritha[512];

    cout << "Enter a line: ";
    cin.getline(pritha, sizeof(pritha));

    int length = 0;
    while (pritha[length]) {
        length++;
    }

    cout << "Reversed line: ";
    char reversePritha[512];
    int index = 0;
    for (int i = length - 1; i >= 0; i--) {
        reversePritha[index++] = pritha[i];
    }

    reversePritha[index] = '\0';

    cout << reversePritha << endl;

    return 0;
}

/*
    abc
    cba
*/