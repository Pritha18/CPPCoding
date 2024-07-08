//8.18. Write a program that read two numbers(x,y) and display x^y (x power y) using loop

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int x, y;
    cout << "Enter base number (x): ";
    cin >> x;
    cout << "Enter exponent number (y): ";
    cin >> y;

    int result = 1;

    for(int i = 0; i < y; ++i) {
        result *= x;
    }

    cout << x << " raised to the power " << y << " is " << result << endl;

    return 0;
}
