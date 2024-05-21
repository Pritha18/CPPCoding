//5.4. Write a C program print total number of days in a month using switch case

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int month;
	cout << "enter the month number: ";
	cin >> month;


	switch (month) {
	    case 1:
            cout << "31" << endl;
            break;

        case 2:
            cout << "28 is Not Leap Year" << endl;
            cout << "29 is Leap Year" << endl;
            break;

        case 3:
            cout << "31" << endl;
            break;

        case 4:
            cout << "30" << endl;
            break;

        case 5:
               cout << "31" << endl;
               break;
               
        case 6:
               cout << "30" << endl;
               break;
        case 7:
               cout << "31" << endl;
               break;
        case 8:
               cout << "31" << endl;
               break;
        case 9:
               cout << "30" << endl;
               break;
        case 10:
                cout << "31" << endl;
                break;
        case 11:
                cout << "30" << endl;
                break;
        case 12:
                cout << "31" << endl;
                break;
        
        default:
                cout << "Invalid Input" << endl;
                break;
    }

    return 0;
}

/*
  We will do it again after learning string
*/