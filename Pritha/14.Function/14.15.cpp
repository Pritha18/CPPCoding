//14.15. Write a function that gets any positive integer and returns it's reverse

#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int reversed = reverseNumber(num);
    cout << "The reverse of " << num << " is: " << reversed << endl;

    return 0;
}
