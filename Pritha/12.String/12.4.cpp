//12.4. Write a program that converts a line to lowercase

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char pritha[64];

    cout << "Enter a line: ";
    cin.getline(pritha, sizeof(pritha));

    // Converting to lowercase
    for (int i = 0; pritha[i] != '\0'; ++i)
    {
        if (pritha[i] >= 'A' && pritha[i] <= 'Z')
        {
            pritha[i] = pritha[i] - 'A' + 'a';
        }
    }

    cout << "Entered line in lowercase is: " << pritha << endl;

    return 0;
}
