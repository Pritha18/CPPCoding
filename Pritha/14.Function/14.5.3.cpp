//14.5.3. Write a function that gets two integers and display maximum

#include <iostream>
using namespace std;

void max(int x, int y)
{
	int maximum = (x > y) ? x : y;

	cout << "The maximum is: " << maximum << endl;
} 

int main(int argc, char const *argv[])
{
	int pritha, imran;

	cout << "Enter two integer variables: ";
	cin >> pritha >> imran;

	max(pritha, imran); 

	return 0;
}
