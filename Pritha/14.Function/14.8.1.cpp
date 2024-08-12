//14.8.1. Write a function that reads three integers and display minimum

#include <iostream>
using namespace std;

void findMin() 
{
    int x, y, z;

    cout << "Enter three integer variables: ";
    cin >> x >> y >> z;

    int min = x;
    if (y < min) min = y;
    if (z < min) min = z;

    cout << "The minimum is: " << min << endl;
} 

int main(int argc, char const *argv[])
{    
    findMin(); 

    return 0;
}
