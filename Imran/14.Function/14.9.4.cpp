// 14.9.4. Write a function that gets three integers and returns median

#include <iostream>
using namespace std;

int max(int x , int y) {
	return x > y ? x : y;
}

int min(int x , int y) {
	return x < y ? x : y;
}

int findMedian(int x , int y, int z) {
	int maxValue = max(x, max(y, z));
	int minValue = min(x, min(y, z));

	if x != maxValue && x!= minValue {
		return x;
	} else if y != maxValue && y != minValue {
		return y;
	}

	return z;
}

int main(int argc, char const *argv[])
{
	int x, y, z;

	cout << "Enter three integer variables: ";
	cin >> x >> y >> z;

	cout << "median value is: " << findMedian(x, y, z) << endl;
	
	return 0;
}