//14.6.2. Write a function that reads two integers and returns minimum

#include <iostream>
using namespace std;

int min() 
{
    int x, y;

    cout << "Enter two integer variables: ";
    cin >> x >> y;

    int minimum = (x < y) ? x : y;

    return minimum;
}

int main(int argc, char const *argv[])
{
    int minimum = min();

    cout << "The minimum is: " << minimum << endl;

    return 0;
}
