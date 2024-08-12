//14.9.2. Write a function that reads three integers and returns median

#include <iostream>
using namespace std;

int findMedian() 
{
	int x, y, z;
	cout << "Enter three integer variables: ";
	cin >> x >> y >> z;

	if ((x > y) != (x > z))
		return x;
	else if ((y > x) != (y > z))
		return y;
	else
		return z;
}

int main(int argc, char const *argv[])
{
	int median = findMedian();

	cout << "The median is: " << median << endl;

	return 0;
}
