//14.42. Write a function that gets a string and reverse all characters

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverseString(string& str) {
    reverse(str.begin(), str.end());
}

int main(int argc, char const *argv[])
{
    string input;
    cout << "Enter the line of text: ";
    getline(cin, input);

    cout << "Entered text: " << input << endl;

    reverseString(input);

    cout << "Reversed text: " << input << endl;

    return 0;
}
