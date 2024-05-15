//4.14. Write a C program to generate a simple arithmetic calculator
	
	hints: 
	enter two numbers: 6 5
	select the menu:
	1. Add
	2. Subtract
	3. Multiply
	4. Divide


#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

    double num1, num2, choice, result;
    
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Display menu
    cout << "Select the operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    // Perform selected operation
    switch(choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error! Division by zero." << endl;
            } else {
                result = static_cast<float>(num1) / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            }
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
    }
    
    return 0;
}
