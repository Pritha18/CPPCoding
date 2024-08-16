//14.39. Write a C++ program to find all perfect numbers between given a interval using functions.


#include <iostream>
using namespace std;

bool isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

void findPerfectNumbers(int start, int end) {
    bool found = false;
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            cout << i << " is a perfect number." << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No perfect numbers found in the given interval." << endl;
    }
}

int main(int argc, char const *argv[]) 
{
    int start, end;

    cout << "Enter the start of the interval: ";
    cin >> start;
    cout << "Enter the end of the interval: ";
    cin >> end;

    findPerfectNumbers(start, end);

    return 0;
}
