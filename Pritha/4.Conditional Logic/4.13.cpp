//4.13. Write a C program to check whether a character is uppercase or lowercase alphabet

#include <iostream>
#include <cctype> // for isupper() and islower()

using namespace std;

int main(int argc, char const *argv[]) 
{
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    if (isupper(ch)) {
        cout << ch << " is an uppercase alphabet." << endl;
    } else if (islower(ch)) {
        cout << ch << " is a lowercase alphabet." << endl;
    } else {
        cout << ch << " is not an alphabet." << endl;
    }
    
    return 0;
}
