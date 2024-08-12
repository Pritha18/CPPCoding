//14.4.3. Write a function that gets two integers and display Division

#include <iostream>
using namespace std;

void divide(int x, int y)
{
    if (y != 0) {
        int result = x / y;
        cout << "The result is: " << result << endl;
    } else {
        cout << "Error: Division by zero is undefined." << endl;
    }
} 

int main(int argc, char const *argv[])
{
    int pritha, imran;

    cout << "Enter two integer variables: ";
    cin >> pritha >> imran;

    divide(pritha, imran); 

    return 0;
}
