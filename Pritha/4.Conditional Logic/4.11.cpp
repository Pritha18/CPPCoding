//4.11. Write the code to check whether an input alphabet is a vowel or not. Both lower-case and upper-case should be checked.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    char ch;
    
    cout << "Enter an alphabet: ";
    cin >> ch;
    
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') 
    {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is not a vowel." << endl;
    }
    
    return 0;
}
