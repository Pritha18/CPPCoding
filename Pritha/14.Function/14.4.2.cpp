//14.4.2. Write a function that reads two integers and returns Division

#include <iostream>
using namespace std;

int divide() 
{
    int x, y;

    cout << "Enter two integer variables: ";
    cin >> x >> y;

    if (y != 0) {
        return x / y;
    } else {
        cout << "Error: Division by zero is undefined." << endl;
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int result = divide();

    if (result != 0) {
        cout << "The result is: " << result << endl;
    }

    return 0;
}
