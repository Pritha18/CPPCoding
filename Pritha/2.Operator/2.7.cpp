//2.7. Write a program that read radius of a circle and display the area

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{

    double radius, circleArea;

    //take radius as input
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    //Calculating the area of the circle
    circleArea = 3.1416 * radius * radius;

    // Displaying the result
    cout << "Area of the circle: " << circleArea << endl;

    return 0;
}
