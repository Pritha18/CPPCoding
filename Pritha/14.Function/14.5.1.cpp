//14.5.1. Write a function that reads two integers and display maximum


#include <iostream>
using namespace std;

void max() 
{
	int x, y;

	cout << "Enter two integer variables: ";
	cin >> x >> y;

	int maximum = (x > y) ? x : y;

	cout << "The maximum is: " << maximum << endl;
} 

int main(int argc, char const *argv[])
{	
	max(); 

	return 0;
}
