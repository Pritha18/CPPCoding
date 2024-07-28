//12.3. Write a program that converts a line to uppercase.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char pritha[64];

    cout << "Enter a line: ";
    cin.getline(pritha, sizeof(pritha));

    // Converting to uppercase
    for (int i = 0; pritha[i] != '\0'; ++i)
    {
        if (pritha[i] >= 'a' && pritha[i] <= 'z')
        {
            pritha[i] = pritha[i] - 'a' + 'A';
        }
    }

    cout << "Entered line in uppercase is: " << pritha << endl;

    return 0;
}
