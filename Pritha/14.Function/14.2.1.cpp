//14.2.1. Write a function that reads two integers and display Substraction

#include <iostream>
using namespace std;

void sub() 
{
	int x, y;

	cout << "enter two integer variable: ";
	cin >> x >> y;

	int result = x - y;

	cout << "The result is: " << result << endl;
} 


int main(int argc, char const *argv[])
{	
	sub(); 

	return 0;
}
