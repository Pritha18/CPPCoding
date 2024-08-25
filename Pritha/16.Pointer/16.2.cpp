//16.2. Write a program that read any number and change it with a pointer variable then display it.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int *ptr = &num;

    cout << "Address of variable num is: " << ptr << endl;
    cout << "Value of variable num is: " << num << endl;
    cout << "Value of variable num through pointer is: " << *ptr << endl;

    *ptr = 100;
    cout << "Value of variable num after change is: " << num << endl;

    return 0;
}
