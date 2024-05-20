//4.17. Write a C program to input all sides of a triangle and check whether triangle is valid or not

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    double a, b, c;
    
    cout << "Enter the sides of the triangle: ";
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }
    
    return 0;
}
