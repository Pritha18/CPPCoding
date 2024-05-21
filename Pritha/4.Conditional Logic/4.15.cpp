// 4.15. Write a program that read three numbers a,b,c and determine the roots of the quadratic equation:
// ax^2 + bx + c = 0


#include <iostream>
#include <cmath>  

using namespace std;

int main(int argc, char const *argv[]) 
{
    double a, b, c;
    
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    
    double discriminant = b * b - 4 * a * c;
    
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        cout << "Root 1: " << root1 << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        
        cout << "Root: " << root << endl;
    } else { // confused about how to do this when discriminant < 0
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Real part: " << realPart << endl;
        cout << "Imaginary part: " << imaginaryPart  << " i^2"<< endl;
    }
    
    return 0;
}
