//14.8.3. Write a function that gets three integers and display minimum

#include <iostream>
using namespace std;

void findMin(int x, int y, int z)
{
    int min = x;
    if (y < min) min = y;
    if (z < min) min = z;

    cout << "The minimum is: " << min << endl;
} 

int main(int argc, char const *argv[])
{
    int a, b, c;

    cout << "Enter three integer variables: ";
    cin >> a >> b >> c;

    findMin(a, b, c); 

    return 0;
}
