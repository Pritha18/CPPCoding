//14.3.3. Write a function that gets two integers and display Multiplication

#include <iostream>
using namespace std;

void multiply(int x, int y)
{
	int product = x * y;

	cout << "The result is: " << product << endl;
} 

int main(int argc, char const *argv[])
{
	int pritha, imran;

	cout << "Enter two integer variables: ";
	cin >> pritha >> imran;

	multiply(pritha, imran); 

	return 0;
}
