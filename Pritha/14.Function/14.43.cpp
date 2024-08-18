//14.43. Write a function that gets a string and convert it to uppercase

#include <iostream>
#include <string>
using namespace std;

void convertToUpper(string &str) {
    for (int i = 0; i < str.length(); ++i) {
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

    convertToUpper(input);

    cout << "Entered line in uppercase is: " << input << endl;

    return 0;
}
