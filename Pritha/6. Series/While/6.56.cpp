//6.56. Write a program to print all number who is divible by 5 from n to 1.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    while(n > 0) {
        if(n % 5 == 0) { 
            cout << n << endl;
        }
        --n;
    }

    return 0;
}
