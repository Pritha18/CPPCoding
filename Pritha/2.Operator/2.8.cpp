//2.8. Write a program that read temperature in Celsius and display in Farenheit
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    float celsius, farenheit;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Farenheit
    farenheit = (celsius * 9.0) / 5.0 + 32;

    cout << "The temperature in Farenheit: " << farenheit << endl;

    return 0;
}
