//2.9. Write a program that read temperature in Farenheit and display in Celsius

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    float celsius, farenheit;

    cout << "Enter the temperature in farenheit: ";
    cin >> farenheit;

    // Convert farenheit to celsius
    celsius = (farenheit - 32.0) * 5.0 / 9.0;

    cout << "The temperature in celsius: " << celsius << endl;

    return 0;
}
