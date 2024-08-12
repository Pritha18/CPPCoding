//14.4.4. Write a function that gets two integers and returns Division

#include <iostream>
using namespace std;

int divide(int x, int y)
{
    if (y != 0) {
        return x / y;
    } else {
        cout << "Error: Division by zero is undefined." << endl;
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int pritha, imran;

    cout << "Enter two integer variables: ";
    cin >> pritha >> imran;

    int result = divide(pritha, imran); 

    if (result != 0) {
        cout << "The result is: " << result << endl;
    }

    return 0;
}
