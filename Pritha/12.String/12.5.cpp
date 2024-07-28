//12.5. Write a program that read a line of text and display it's length

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char pritha[64];

    cout << "Enter a line: ";
    cin.getline(pritha, sizeof(pritha));

    int length = 0;
    while (pritha[length]) {
        length++;
    }

    cout << "Length of the entered line is: " << length << endl;

    return 0;
}
