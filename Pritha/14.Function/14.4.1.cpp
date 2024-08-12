//14.4.1. Write a function that reads two integers and display Division

#include <iostream>
using namespace std;

void divide() 
{
    int x, y;

    cout << "Enter two integer variables: ";
    cin >> x >> y;

    if (y != 0) {
        int result = x / y;
        cout << "The result is: " << result << endl;
    } else {
        cout << "Error: Division by zero is undefined." << endl;
    }
} 

int main(int argc, char const *argv[])
{    
    divide(); 

    return 0;
}
