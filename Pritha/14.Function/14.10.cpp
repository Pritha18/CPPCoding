//14.10. Write a function that gets length and width of a rectangle and returns area

#include <iostream>
using namespace std;

double findArea(double length, double width)
{
    double area = length * width;
    return area;
}

int main(int argc, char const *argv[])
{
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    double area = findArea(length, width);
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
