//14.43. Write a function that gets a string and convert it to uppercase

#include <iostream>
#include <string>
using namespace std;

string convertToUpper(string str) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    return str;
}

void convertToUpperChar(char str[]) {
    for (int i = 0; str[i]; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main(int argc, char const *argv[]) 
{
    string input;

    cout << "Enter a line: ";
    getline(cin, input);

    str = convertToUpper(input);

    cout << "Entered line in uppercase is: " << input << endl;

    return 0;
}
