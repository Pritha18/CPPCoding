/*
	Remember - next poiter post will be about

	pass by value 

	and 

	pass by reference

*/

/*
	In this file we will talk about pass by reference or call by reference
*/

#include <iostream>
using namespace std;

/*
	In the past code we already learn about call by value

	During call by value, we saw we are sending the value of a variable

	Call by reference is, 
	sending the address for initialization of a pointer variable instead of value
*/


// every function has their memory storage in computer memory
// sum's memory inside add will be different
void add(int x, int y, int *pritha) {
	*pritha = x + y;

	cout << "[inside add] value of sum is: " << *pritha << endl;
}

// sum's memory inside main function will be different than add function
int main(int argc, char const *argv[])
{
	int x, y;
	cout << "enter the value of x and y: ";
	cin >> x >> y;

	int sum = 0;
	cout << "[inside main] before passing sum is: " << sum << endl;

	// passed address of sum to add function
	// pass by reference
	add(x, y, &sum);


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

/*
	void add(int x, int y, int *pritha)

	add(x, y, sum)

	the error is like
	// pritha expects an address for initialization
	// but we are sending value
	// that's why it is giving issue
	int *pritha = sum;

*/