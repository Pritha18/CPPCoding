//8.15. Write a program that read any decimal number and display equivalent hexadecimal number


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int decimal;
    cout << "Please enter the decimal: ";
    cin >> decimal;

    int hexDigits[100];
    int hexIndex = 0;

    while (decimal != 0) {
        hexDigits[hexIndex] = decimal % 16;
        hexIndex++;
        decimal = decimal / 16;
    }

    cout << "Equivalent hexadecimal of entered decimal is: ";

    for (int i = hexIndex - 1; i >= 0; --i) {
        if (hexDigits[i] < 10) {
            cout << hexDigits[i];
        } else {
            char hexChar;
            switch (hexDigits[i]) {
                case 10:
                    hexChar = 'A';
                    break;
                case 11:
                    hexChar = 'B';
                    break;
                case 12:
                    hexChar = 'C';
                    break;
                case 13:
                    hexChar = 'D';
                    break;
                case 14:
                    hexChar = 'E';
                    break;
                case 15:
                    hexChar = 'F';
                    break;
            }
            cout << hexChar;
        }
    }

    cout << endl;

    return 0;
}
