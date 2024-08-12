//14.6.4. Write a function that gets two integers and returns minimum

#include <iostream>
using namespace std;

int min(int x, int y)
{
    return (x < y) ? x : y;
}

int main(int argc, char const *argv[])
{
    int pritha, imran;

    cout << "Enter two integer variables: ";
    cin >> pritha >> imran;

    int minimum = min(pritha, imran); 

    cout << "The minimum is: " << minimum << endl;

    return 0;
}
