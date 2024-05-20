//5.5. Write a C program to create Simple Calculator using switch case


#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    double x, y;
    char operation;

    cout << "Enter the expression using two operands and one operator: ";
    cin >> x >> operation >> y;

    double result = 0;

    switch (operation) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y != 0) {
                result = x / y;
            } else {
                cout << "Math Error!! We can't divide by zero." << endl;
                
            }
            break;
        case '%':
            if (y != 0) {
                result = int(x) % int(y);
            } else {
                cout << "Math Error!! We can't divide by zero." << endl;
                
            }
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
            
    }

    cout << "The result is: " << result << endl;

    return 0;
}
