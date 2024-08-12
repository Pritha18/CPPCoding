//14.5.4. Write a function that gets two integers and returns maximum

#include <iostream>
using namespace std;

int max(int x, int y)
{
	return (x > y) ? x : y;
}

int main(int argc, char const *argv[])
{
	int pritha, imran;

	cout << "Enter two integer variables: ";
	cin >> pritha >> imran;

	int maximum = max(pritha, imran); 

	cout << "The maximum is: " << maximum << endl;

	return 0;
}
