// 14.1.1. Write a function that reads two integers and display Addition

#include <iostream>
using namespace std;

void add() 
{
	int x, y;

	cout << "enter two integer variable: ";
	cin >> x >> y;

	int sum = x + y;

	cout << "The result is: " << sum << endl;
} 


int main(int argc, char const *argv[])
{	
	add(); 

	return 0;
}
