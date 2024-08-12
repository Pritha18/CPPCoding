//14.3.1. Write a function that reads two integers and display Multiplication

#include <iostream>
using namespace std;

void multiply() 
{
	int x, y;

	cout << "Enter two integer variables: ";
	cin >> x >> y;

	int product = x * y;

	cout << "The result is: " << product << endl;
} 

int main(int argc, char const *argv[])
{	
	multiply(); 

	return 0;
}
