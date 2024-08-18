//14.42. Write a function that gets a string and reverse all characters

#include <iostream>
using namespace std;

int getStringLength(const char str[]) {
    int length = 0;
    while (str[length]) {
        length++;
    }
    return length;
}

void reverseString(char str[], int length) {
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main(int argc, char const *argv[]) {
    char pritha[64];

    cout << "Enter a line: ";
    cin.getline(pritha, sizeof(pritha));

    int length = getStringLength(pritha);

    reverseString(pritha, length);

    cout << "Reversed line: " << pritha << endl;

    return 0;
}
