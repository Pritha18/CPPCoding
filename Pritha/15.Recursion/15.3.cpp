//15.3. Write a recursive function that prints 50 to 100.

#include <iostream>
using namespace std;

void range(int n) {
        if (n > 100) {
                return;
        }
        
        cout << n << endl;  
        
        range(n + 1);
}

int main(int pritha, char** imran) {
        range(50);

        return 0;
}
