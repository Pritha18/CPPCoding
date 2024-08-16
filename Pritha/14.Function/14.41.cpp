//14.41. Write a function that gets a string and returns it's length


#include <iostream>
using namespace std;

int getStringLength(const string input) {
    return input.length();  
}

int main(int argc, char const *argv[])
{
    string userInput;
    cout << "Enter a line of text: ";
    getline(cin, userInput);

    int length = getStringLength(userInput);

    cout << "Length of the entered line is: " << length << endl;

    return 0;
}
