//14.8.4. Write a function that gets three integers and returns minimum

#include <iostream>
using namespace std;

int findMin(int x, int y, int z)
{
    int min = x;
    if (y < min) min = y;
    if (z < min) min = z;

    return min;
}

int main(int argc, char const *argv[])
{
    int a, b, c;

    cout << "Enter three integer variables: ";
    cin >> a >> b >> c;

    int min = findMin(a, b, c); 

    cout << "The minimum is: " << min << endl;

    return 0;
}
