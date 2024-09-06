/*
	What is dynamic memory allocation

	Dynamic Memory allocation refers to performing memory allocation manually.

*/

#include <iostream>
using namespace std;

void compilerAllocation() {
	// normal variable allocations
	// it will deallocated automatically when it is out of scope
	// compile time from stack
	int arr[25];
}

void dynamicMemoryAllocation() {
	int size;
    
	cout << "Enter the number of elements: ";
	cin >> size;

	// manually allocating memory for array
	// dynamic memory allocation
	// it will not be deallocated automatically
	// run time from heap
	int *arr = new int[size];
	
	// manually deallocating the memories
	delete[] arr;

	int *pritha = new int;
	delete pritha;
}

int main(int argc, char const *argv[])
{
	compilerAllocation();

	dynamicMemoryAllocation()

	return 0;
}

/*
	The difference between creating a normal array and allocating a block 
	using new.

	normal arrays is deallocated by the compiler. 

	Whereas the block is created dynamically until the programmer deletes it or 
	if the program terminates.
*/

/*
	Read world example

	availble unit - 500

	need to run 5 iteration


	1st - 100 unit
	2nd - 300 unit
	3rd - 250 unit - fail in the 3rd iteration
	4th - 450 unit
	5th - 500 unit

	if we don't use dynamic memory allocation

	that's why we need to use dynamic memory allocation

	my run time was - 880 ms
*/

/*
	Another trick - memory pulling 
	don't work always, but works in most of the case

	availble unit - 500

	need to run 5 iteration

	1st - 100 unit
	2nd - 300 unit
	3rd - 250 unit
	4th - 450 unit
	5th - 500 unit


	delcare an array with 500 units, index variable to track

	// replace old data in each iteration

	1st - start index from 0
	2nd - start index from 0
	3rd - start index from 0
	4th - start index from 0
	5th - start index from 0

	run time was - 580 ms
*/

