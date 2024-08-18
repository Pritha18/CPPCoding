//14.41. Write a function that gets a string and returns it's length

#include <iostream>
using namespace std;

int getStringLength(const char str[]) {
    int length = 0;
    while (str[length]) {
        length++;
    }
    return length;
}

int main(int argc, char const *argv[]) {
    char pritha[64];

    cout << "Enter a line: ";
    cin.getline(pritha, sizeof(pritha));

    int length = getStringLength(pritha);

    cout << "length: " << length << endl;

    return 0;
}