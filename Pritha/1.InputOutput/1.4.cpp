// 1.4. Write a program that read and display floating point number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// declare floating point number
	float pritha;

	// prompt user
	cout << "enter the value of floating point number: " ;

	// taking floating point variable input
	//if i do not use precision and fixed then it gives total 6 numbers(before+after dot)
	//if i use both then it gives exactly what i want after the dot
	//if i use only precision the it gives whatever i asked before+after dot
	//if i only use fixed then it gives 6 numbers after the dot
	cin >> pritha;
	cout.precision(4);
	cout << fixed;

	// display the floating point variable
	cout << "pritha contains: " << pritha << endl;

	return 0;
}

