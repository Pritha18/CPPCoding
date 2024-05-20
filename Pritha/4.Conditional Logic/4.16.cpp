//4.16. Write a C program to input angles of a triangle and check whether triangle is valid or not

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    double angle1, angle2, angle3;
    
    cout << "Enter the three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;
    
    if (angle1 + angle2 + angle3 == 180) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }
    
    return 0;
}
