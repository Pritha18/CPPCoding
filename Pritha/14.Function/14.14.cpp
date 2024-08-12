//14.14. Write a function that gets any positive integer and returns it's digital root


#include <iostream>
using namespace std;

int digitalSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int digitalRoot(int n)
{
    while (n >= 10)
    {
        n = digitalSum(n); 
    }
    return n;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int root = digitalRoot(num);
    cout << "The digital root of " << num << " is: " << root << endl;

    return 0;
}
