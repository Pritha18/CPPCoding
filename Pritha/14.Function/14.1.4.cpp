// 14.1.4. Write a function that gets two integers and returns Addition

#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}


int main(int argc, char const *argv[])
{
	int pritha, imran;

	cout << "enter two integer variable: ";
	cin >> pritha >> imran;

	int sum = add(pritha, imran); 

	cout << "The result is: " << sum << endl;

	return 0;
}
