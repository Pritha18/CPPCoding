

// 14.1.3. Write a function that gets two integers and display Addition

#include <iostream>
using namespace std;

/*
	now we will be writing a function 

	which will have parameters(input)
	which will have no return types(output)
*/

void add(int x, int y)
{
	int sum = x + y;

	cout << "The result is: " << sum << endl;
} // no return type


int main(int argc, char const *argv[])
{
	int pritha, imran;

	cout << "enter two integer variable: ";
	cin >> pritha >> imran;

	// no return type function
	// only needs the variable name inside function call
	// function parameter variable name and
	// function passed parameters name need not to be same
	add(pritha, imran); // function calling

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