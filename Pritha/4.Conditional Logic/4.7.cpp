//4.7. Write a program that read three numbers and display mediam

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int num1, num2, num3, median;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;
    
    if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3))
        median = num1;
    else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3))
        median = num2;
    else
        median = num3;
    
    
    cout << "The median is: " << median << endl;
    
    return 0;
}
