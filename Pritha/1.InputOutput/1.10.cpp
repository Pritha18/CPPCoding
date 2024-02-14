//1.10. Wrtie a program that read any character and display equivalent ASCII value

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    //declare ascii variable
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII Value of c: "  << int(c) << endl;
    return 0;
}
