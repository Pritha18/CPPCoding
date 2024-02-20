//2.18. Write a C++ program to swap the values of two variables using temporary variable

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int a, b, temp;

    // Input values for a and b
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;

    // Swapping the values using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Displaying the values after swapping
    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
