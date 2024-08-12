//14.2.3. Write a function that gets two integers and display Substraction

#include <iostream>
using namespace std;

void subtract(int x, int y)
{
    int difference = x - y;

    cout << "The result is: " << difference << endl;
} 

int main(int argc, char const *argv[])
{
    int pritha, imran;

    cout << "Enter two integer variables: ";
    cin >> pritha >> imran;

    subtract(pritha, imran); 

    return 0;
}
