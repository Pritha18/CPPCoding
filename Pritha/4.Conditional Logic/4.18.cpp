//4.18. Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    double a, b, c;
    
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    
    //checking validity
    if (a + b > c && a + c > b && b + c > a) {
        //type of triangle
        if (a == b && b== c) { // why a==b==c becomes isosceles here?
            cout << "The triangle is equilateral." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "The triangle is isosceles." << endl;
        } else {
            cout << "The triangle is scalene." << endl;
        }
    } else {
        cout << "The triangle is not valid." << endl;
    }
    
    return 0;
}


/*
    swapping value in c++
    int temp = x;
    x = y;
    y = temp;

    swapping values in python
    x, y = y, x
*/