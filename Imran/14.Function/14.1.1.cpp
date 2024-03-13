
// 14.1.1. Write a function that reads two integers and display Addition

#include <iostream>
using namespace std;

/*
	now we will be writing a function 

	which will have no parameters(input)
	which will have no return types(output)
*/

void add() // no input
{
	int x, y;

	cout << "enter two integer variable: ";
	cin >> x >> y;

	int sum = x + y;

	cout << "The result is: " << sum << endl;
} // no return type


int main(int argc, char const *argv[])
{
	// no return type function
	add(); // function calling

	return 0;
}

/*
	main function variations

	main()
	{
	
	}

	void main()
	{
	
	}

	int main()
	{
		return 0;
	}
*/