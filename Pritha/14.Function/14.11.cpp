//14.11. Write a function that gets radius of a circle and returns area

#include <iostream>
using namespace std;

void findArea(double radius)
{
	double area = 3.14159 * radius * radius;
	cout << "The area is: " << area << endl;
} 

int main(int argc, char const *argv[])
{
	double r;
	cout << "Enter the radius of the circle: ";
	cin >> r;

	findArea(r); 

	return 0;
}
