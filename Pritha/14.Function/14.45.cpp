//14.45. Write a function that gets a string and copy to another string


#include <iostream>
using namespace std;

void modifyString(char str[], const char newStr[]) 
{
    int i;
    for (i = 0; newStr[i]; ++i) {
        str[i] = newStr[i];
    }
    str[i] = '\0'; 
}

int main(int argc, char const *argv[]) 
{
    char original[512];
    char newStr[512];
    
    cout << "Enter the original string: ";
    cin.getline(original, sizeof(original));
    
    cout << "Enter the new string to replace the original: ";
    cin.getline(newStr, sizeof(newStr));
    
    modifyString(original, newStr);
    
    cout << "Original string after modification: " << original << endl;

    return 0;
}
