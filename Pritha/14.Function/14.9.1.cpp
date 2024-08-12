//14.9.1. Write a function that reads three integers and display median

#include <iostream>
using namespace std;

void findMedian() 
{
	int x, y, z;
	cout << "Enter three integer variables: ";
	cin >> x >> y >> z;

	int median;
	if ((x > y) != (x > z))
		median = x;
	else if ((y > x) != (y > z))
		median = y;
	else
		median = z;

	cout << "The median is: " << median << endl;
} 

int main(int argc, char const *argv[])
{	
	findMedian(); 

	return 0;
}
