//9.6. Write a program that finds the first prime number greater than 50.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{
    int num = 51; 
    bool isPrime = false;

    while (true) {
        isPrime = true; 

        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "The first prime number greater than 50 is: " << num << endl;
            break;
        }

        ++num;
    }

    return 0;
}
