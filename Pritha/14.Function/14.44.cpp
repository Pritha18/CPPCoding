//14.44. Write a function that gets a string and convert it to lowercase

#include <iostream>
#include <string>
using namespace std;

void convertToLower(string &str) {   
    for (int i = 0; i < str.length(); ++i) {
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

    convertToLower(input);

    cout << "Entered line in lowercase is: " << input << endl;

    return 0;
}