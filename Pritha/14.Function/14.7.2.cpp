//14.7.2. Write a function that reads three integers and returns maximum

#include <iostream>
using namespace std;

int findMax(int x, int y, int z)
{
    int max_num;

    if (x > y && x > z)
        max_num = x;
    else if (y > z)
        max_num = y;
    else
        max_num = z;

    return max_num;
}

int main(int argc, char const *argv[])
{
    int a, b, c;

    cout << "Enter three integer variables: ";
    cin >> a >> b >> c;

    int max_num = findMax(a, b, c); 

    cout << "The maximum number is: " << max_num << endl;

    return 0;
}
