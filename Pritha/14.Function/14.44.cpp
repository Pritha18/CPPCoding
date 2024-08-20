//14.44. Write a function that gets a string and convert it to lowercase

#include <iostream>
#include <string>
using namespace std;

string convertToLower(string str) {   
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    return str;
}

void convertToLowerChar(char str[]) {
    for (int i = 0; str[i]; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main(int argc, char const *argv[]) 
{
    string input;

    cout << "Enter a line: ";
    getline(cin, input);

    str = convertToLower(input);

    cout << "Entered line in lowercase is: " << input << endl;

    return 0;
}