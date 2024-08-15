// 14.8.4. Write a function that gets three integers and returns minimum

#include <iostream>
using namespace std;

int min(int x , int y) {
	return x < y ? x : y;
}

int main(int argc, char const *argv[])
{
	int x, y, z;

	cout << "Enter three integer variables: ";
	cin >> x >> y >> z;


	int minValue = min(x, min(y, z));
	// int minValue = min(min(x, y), z);

	cout << "minimum value is: " << minValue << endl;
	
	return 0;
}