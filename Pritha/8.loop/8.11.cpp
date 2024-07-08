//8.11. Write a C program to find one's complement of a binary number


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) 
{
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    string onesComplement = binary;
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '0') {
            onesComplement[i] = '1';
        } else if (binary[i] == '1') {
            onesComplement[i] = '0';
        } else {
            cout << "Invalid binary number." << endl;
            return 1;
        }
    }

    cout << "The one's complement of " << binary << " is " << onesComplement << endl;

    return 0;
}


