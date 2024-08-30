/*
	This pointer
	to resolve ambiguous situation
*/

#include <iostream>
using namespace std;

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

	// this pointer is a object pointer
	// which will point to current object
	// so compiler will know which length belong to which
	// better ambiguous situation
	Box(int length, int width) {
		this -> length = length;
		this -> width = width;
	}


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


/*
	Before talking about this pointer

	let's talk about access operator

	in structure (.)dot is called access operator

	struct Box
	{
		int length;
		int width;
	};

	Box red;
	
	// here we are accesing the properties of box structure with (.) operator
	// that's why it's called access operator
	red.length = 5;

	Access oprator has two variations
	(.) when the variable is value type
	(->) whene the variable is pointer type

	Box *pritha;
	pritha->length = 5;
	pritha -> width = 5;
*/