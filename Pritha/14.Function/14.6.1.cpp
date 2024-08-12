//14.6.1. Write a function that reads two integers and display minimum

#include <iostream>
using namespace std;

void min() 
{
    int x, y;

    cout << "Enter two integer variables: ";
    cin >> x >> y;

    int minimum = (x < y) ? x : y;

    cout << "The minimum is: " << minimum << endl;
} 

int main(int argc, char const *argv[])
{   
    min(); 

    return 0;
}
