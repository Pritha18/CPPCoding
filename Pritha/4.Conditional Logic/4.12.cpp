//4.12. Write a C program to input any character and check whether it is alphabet, digit or special character

#include <iostream>
#include <cctype> 

using namespace std;

int main(int argc, char const *argv[]) 
{
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    if (isalpha(ch)) {
        cout << ch << " is an alphabet." << endl;
    } else if (isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    } else {
        cout << ch << " is a special character." << endl;
    }
    
    return 0;
}
