//14.13. Write a function that gets any positive integer and returns it's digital sum


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

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int sum = digitalSum(num);
    cout << "The digital sum of " << num << " is: " << sum << endl;

    return 0;
}
