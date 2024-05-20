//5.2. Write a program that read any number and display equivalent roman number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int number;
	cout << "enter any number between 1 to 20: ";
	cin >> number;


	switch (number) {
	    case 1:
	           cout << "I" << endl;
               break;
        case 2:
               cout << "II" << endl;
               break;

        case 3:
               cout << "III" << endl;
               break;
        case 4:
               cout << "IV" << endl;
               break;
        case 5:
               cout << "V" << endl;
               break;
        case 6:
               cout << "VI" << endl;
               break;
        case 7:
               cout << "VII" << endl;
               break;
        case 8:
               cout << "VIII" << endl;
               break;
        case 9:
               cout << "IX" << endl;
               break;
        case 10:
                cout << "X" << endl;
                break;
        case 11:
                cout << "XI" << endl;
                break;
        case 12:
                cout << "XII" << endl;
                break;
        case 13:
                cout << "XIII" << endl;
                break;
        case 14:
                cout << "XIV" << endl;
                break;
        case 15:
                cout << "XV" << endl;
                break;
        case 16:
                cout << "XVI" << endl;
                break;
        case 17:
                cout << "XVII" << endl;
                break;
        case 18:
                cout << "XVIII" << endl;
                break;
        case 19:
                cout << "XIX" << endl;
                break;
        case 20:
                cout << "XX" << endl;
                break;
        default:
                cout << "Invalid Input" << endl;
                break;
    }

    return 0;
}
