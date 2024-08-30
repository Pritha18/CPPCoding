
#include <iostream>
using namespace std;

// this structure is just to learn about implicit constructor
struct Box
{
	int length;
	int width;

	int area() {
		return length * width;
	}
};

int main(int argc, char const *argv[])
{
	// implicit constructor is getting called when we are creating this object
	// all elements will intialized with 0 value
	Box pritha;

	// output of this following line will be 0
	cout << "area of box pritha is: " << pritha.area() << endl;

	return 0;
}

/*
	in class

	if a class has some variable public or private or both

	then,

	when we decare a class object, that moment all class variables are initialized with 0 by an
	implicit constructor.
*/