//14.7.1. Write a function that reads three integers and display maximum

#include <iostream>
using namespace std;

void findMax()
{
    int x, y, z, max_num;

    cout << "Enter three integer variables: ";
    cin >> x >> y >> z;

    if (x > y && x > z)
        max_num = x;
    else if (y > z)
        max_num = y;
    else
        max_num = z;

    cout << "The maximum number is: " << max_num << endl;
} 

int main(int argc, char const *argv[])
{
    findMax(); 

    return 0;
}
