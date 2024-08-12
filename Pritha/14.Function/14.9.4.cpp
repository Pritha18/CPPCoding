//14.9.4. Write a function that gets three integers and returns median

#include <iostream>
using namespace std;

int findMedian(int x, int y, int z)
{
	if ((x > y) != (x > z))
		return x;
	else if ((y > x) != (y > z))
		return y;
	else
		return z;
}

int main(int argc, char const *argv[])
{
	int a, b, c;
	cout << "Enter three integer variables: ";
	cin >> a >> b >> c;

	int median = findMedian(a, b, c);

	cout << "The median is: " << median << endl;

	return 0;
}
