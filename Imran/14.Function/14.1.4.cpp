
// 14.1.4. Write a function that gets two integers and returns Addition

#include <iostream>
using namespace std;

/*
	now we will be writing a function 

	which will have parameters(input)
	which will have return type(output)
*/

int add(int x, int y)
{
	return x + y;
}


int main(int argc, char const *argv[])
{
	int pritha, imran;

	cout << "enter two integer variable: ";
	cin >> pritha >> imran;

	// return type function
	// only needs the variable name inside function call
	// function parameter variable name and
	// function passed parameters name need not to be same
	int sum = add(pritha, imran); // function calling

	cout << "The result is: " << sum << endl;

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