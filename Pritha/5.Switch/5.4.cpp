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
        	   cout << "28" << endl;
               break;

               //this steps below aren't working.....also i want input the name of the months like January, February, not numbers. how to do that?

               /*if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;  // Leap year
               } else {
                days = 28;  // Non-leap year
               }  
               break; */ 

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
