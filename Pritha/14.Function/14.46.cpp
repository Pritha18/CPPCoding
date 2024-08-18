//14.46. Write a function that gets two string and compares them

#include <iostream>
using namespace std;

bool compareStrings(const char str1[], const char str2[]) {
    int i;
    for (i = 0; str1[i] && str2[i]; ++i) {
        if (str1[i] != str2[i]) {
            return false;  
        }
    }

    if (str1[i] || str2[i]) {
        return false;  
    }

    return true;  
}

int main(int argc, char const *argv[]) 
{
    char firstString[512];
    char secondString[512];
    
    cout << "Enter the first string: ";
    cin.getline(firstString, sizeof(firstString));

    cout << "Enter the second string: ";
    cin.getline(secondString, sizeof(secondString));

    if (compareStrings(firstString, secondString)) {
        cout << "The two strings are equal." << endl;
    } else {
        cout << "The two strings are not equal." << endl;
    }

    return 0;
}
