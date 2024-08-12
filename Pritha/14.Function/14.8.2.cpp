//14.8.2. Write a function that reads three integers and returns minimum

#include <iostream>
using namespace std;

int findMin() 
{
    int x, y, z;

    cout << "Enter three integer variables: ";
    cin >> x >> y >> z;

    int min = x;
    if (y < min) min = y;
    if (z < min) min = z;

    return min;
}

int main(int argc, char const *argv[])
{
    int min = findMin();

    cout << "The minimum is: " << min << endl;

    return 0;
}
