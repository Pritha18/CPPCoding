//14.9.3. Write a function that gets three integers and display median

#include <iostream>
using namespace std;

void findMedian(int x, int y, int z)
{
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
	int a, b, c;
	cout << "Enter three integer variables: ";
	cin >> a >> b >> c;

	findMedian(a, b, c); 

	return 0;
}
