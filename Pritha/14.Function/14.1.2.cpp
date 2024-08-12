// 14.1.2. Write a function that reads two integers and returns Addition

#include <iostream>
using namespace std;

int add() 
{
	int x, y;

	cout << "enter two integer variable: ";
	cin >> x >> y;

	int sum = x + y;

	return sum;
}


int main(int argc, char const *argv[])
{
	int sum = add();

	cout << "The result is: " << sum << endl;

	return 0;
}
