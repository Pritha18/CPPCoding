
// 14.1.2. Write a function that reads two integers and returns Addition

#include <iostream>
using namespace std;

/*
	now we will be writing a function 

	which will have no parameters(input)
	which will return type(output)
*/

int add() // no input
{
	int x, y;

	cout << "enter two integer variable: ";
	cin >> x >> y;

	int sum = x + y;

	return sum;
}


int main(int argc, char const *argv[])
{
	// return type function
	int sum = add(); // function calling

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