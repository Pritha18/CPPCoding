//14.7.3. Write a function that gets three integers and display maximum

#include <iostream>
using namespace std;

void findMax(int x, int y, int z)
{
    int max_num;

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
    int a, b, c;

    cout << "Enter three integer variables: ";
    cin >> a >> b >> c;

    findMax(a, b, c); 

    return 0;
}
