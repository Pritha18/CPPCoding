//15.3. Write a recursive function that prints 50 to 100.

#include <iostream>
using namespace std;

void range(int n) {
    if (n > 100) {
        return 0;  
    }

    cout << n << endl;  

    return range(n + 1); 
}

int main(int pritha, char** imran) {
   

    return 0;
}
