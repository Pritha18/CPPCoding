
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

	// since when we declare user defined constructor
	// implicit constructor is disabled
	// so we should create a same constructor as implicit constructor
	// to keep the implicit constructor functionality
	Box() {
		length = 0;
		width = 0;
	}

	// this is called default constructor
	// the best practice is
	// to always declare a default constructor when you declare a user-defined constructor

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

	// as you can see
	// two constructor of same name
	// but still not giving error
	// this is call constructor overloading
	// this depend upon parameter type and parameter count
	// we will learn about these in depth later

	int area() {
		return length * width;
	}
};

int main(int argc, char const *argv[])
{
	// this will not give error anymore
	// since we declare a default constuctor
	Box pritha;

	// output of this following line will be 0
	cout << "area of box pritha is: " << pritha.area() << endl;

	// this will work fine

	Box promi(12, 5);

	// output of this following line will be 0
	cout << "area of box promi is: " << promi.area() << endl;

	return 0;
}