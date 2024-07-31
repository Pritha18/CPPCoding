//12.7. Write a program that read your name and display every character with one space

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char name[64];

    cout << "Enter your name: ";
    cin.getline(name, sizeof(name));

    cout << "Characters with one space: ";
    for (int i = 0; name[i] != '\0'; i++) {
        cout << name[i] << " ";
    }
    cout << endl;

    return 0;
}
