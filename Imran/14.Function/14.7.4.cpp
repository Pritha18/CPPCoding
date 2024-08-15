// 14.7.4. Write a function that gets three integers and returns maximum

#include <iostream>
using namespace std;

int max(int x , int y) {
	return x > y ? x : y;
}

int main(int argc, char const *argv[])
{
	int x, y, z;

	cout << "Enter three integer variables: ";
	cin >> x >> y >> z;


	int maxValue = max(x, max(y, z));
	// int maxValue = max(x, max(y, z));
	// int maxValue = max(max(x, y), z);
	// int maxValue = max(max(a, b), max(c, d));

	cout << "maximum value is: " << maxValue << endl;
	
	return 0;
}