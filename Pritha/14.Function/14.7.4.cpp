//14.7.4. Write a function that gets three integers and returns maximum

#include <iostream>
using namespace std;

int findMax(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > z)
        return y;
    else
        return z;
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
