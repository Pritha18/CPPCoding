//14.2.4. Write a function that gets two integers and returns Substraction

#include <iostream>
using namespace std;

int subtract(int x, int y)
{
    return x - y;
}

int main(int argc, char const *argv[])
{
    int pritha, imran;

    cout << "Enter two integer variables: ";
    cin >> pritha >> imran;

    int difference = subtract(pritha, imran); 

    cout << "The result is: " << difference << endl;

    return 0;
}
