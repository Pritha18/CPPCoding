//9.5. Write a program that prints a multiplication table from 1 to 5, but skips the multiples of 3.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{       
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 10; ++j) {
            int product = i * j;
            
            if (product % 3 == 0) {
                cout << ""; 
            } else {               
                cout << product << " " ;
            }
        }       
        cout << endl;
    }

    return 0;
}

