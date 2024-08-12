// 14.1.3. Write a function that gets two integers and display Addition

#include <iostream>
using namespace std;

void add(int x, int y)
{
	int sum = x + y;

	cout << "The result is: " << sum << endl;
} 


int main(int argc, char const *argv[])
{
	int pritha, imran;

	cout << "enter two integer variable: ";
	cin >> pritha >> imran;

	add(pritha, imran); 

	return 0;
}