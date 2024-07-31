//12.8. Write a program that read your name and display every character with one space in reverse order


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char name[64];

    cout << "Enter your name: ";
    cin.getline(name, sizeof(name));

    int length = 0;
    while (name[length]) {
        length++;
    }

    cout << "Characters in reverse order with one space: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << name[i] << " ";
    }
    cout << endl;

    return 0;
}
