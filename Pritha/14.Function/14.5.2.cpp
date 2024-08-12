//14.5.2. Write a function that reads two integers and returns maximum

#include <iostream>
using namespace std;

int max() 
{
	int x, y;

	cout << "Enter two integer variables: ";
	cin >> x >> y;

	return (x > y) ? x : y;
}

int main(int argc, char const *argv[])
{
	int maximum = max();

	cout << "The maximum is: " << maximum << endl;

	return 0;
}
