/*
	Remember - next poiter post will be about

	pass by value or call by value

	and 

	pass by reference or call by reference

*/

/*
	In this file we will talk about pass by value

	we already learn pass by value when we were learning functions

	funny thing is, we did not know that
*/

#include <iostream>
using namespace std;


// every function has their memory storage in computer memory
// sum's memory inside add will be different
// so, parameters works like initialization with the value send by function call
void add(int imran, int promi, int pritha) {
	pritha = imran + promi;

	cout << "[inside add] value of sum is: " << pritha << endl;
}

// inside compiler this function will be translated like this
// void add() {
// 	int x = value of x;
// 	int y = value of y;
// 	int pritha = value of sum;

// 	pritha = x + y;

// 	cout << "[inside add] value of sum is: " << pritha << endl;
// }

// sum's memory inside main function will be different than add function
int main(int argc, char const *argv[])
{
	int x, y;
	cout << "enter the value of x and y: ";
	cin >> x >> y;

	int sum = 0;
	cout << "[inside main] before passing sum is: " << sum << endl;

	// passed sum to add function
	// pass by value
	// order matters
	add(x, y, sum);


	// after finished executing add function
	// we are again checking sum's value 
	// which is unchanged
	cout << "[inside main] after passing sum is: " << sum << endl;


	// now question is why it is unchanged

	// because from main function we are passing the value of sum
	// not the address
	// and that value is getting assign to another variable named sum of add function
	// in this case sum variable is the parameter of add function
	// parameters are local variables to this add function
	// that's why changing local sum will not change 

	// main funcion's local sum

	return 0;
}