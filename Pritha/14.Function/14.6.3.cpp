//14.6.3. Write a function that gets two integers and display minimum

#include <iostream>
using namespace std;

void min(int x, int y)
{
    int minimum = (x < y) ? x : y;

    cout << "The minimum is: " << minimum << endl;
} 

int main(int argc, char const *argv[])
{
    int pritha, imran;

    cout << "Enter two integer variables: ";
    cin >> pritha >> imran;

    min(pritha, imran); 

    return 0;
}
