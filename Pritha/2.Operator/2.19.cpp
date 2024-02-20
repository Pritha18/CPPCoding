//2.19. Write a C++ program to swap the values of two variables without using temporary variable

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int x, y;
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;
    
    //swapping x and y using bitwise X-OR
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    
    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
