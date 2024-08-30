
#include <iostream>
using namespace std;

/*
	what is constructor


	constructor are basically functions with no return type

	this function are getting called when you create an object of class or structure
*/

struct Box
{
	int length;
	int width;

	// declaring a constructor
	// constructor name will same as structure name
	// it will accept parameters as functions
	// writing a different name will solve the ambiguous situation
	// there is a better way
	// but we will learn that later
	Box(int _length, int _width) {
		length = _length;
		width = _width;
	}

	// ambiguous constuctor
	// why
	// because
	// the parameter name as properties of box name is same
	// Box(int length, int width) {
	// 	length = length;
	// 	width = width;
	// }

	int area() {
		return length * width;
	}
};

int main(int argc, char const *argv[])
{
	// this will give you an error
	// cause we defined a user defined constructor
	// when we define a user defined constructor, 
	// it will disable the implicit constructor
	// Box pritha;

	// this will work fine

	Box promi(12, 5);

	// output of this following line will be 0
	cout << "area of box promi is: " << promi.area() << endl;

	return 0;
}