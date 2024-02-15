
// 2.1. Write a program that read two integer and display sum

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// delcaring two integer variables
	int x, y;

	// reading two integers from console
	cout << "enter the first integer: ";
	cin >> x;
	cout << "enter the second integer: ";
	cin >> y;

	int sum = x + y;

	cout << "sum of two entered integer is: " << sum << endl; 

	return 0;
}


/*
	Operator types

	Arithematic Operator
	Bitwise Operator
	Shift Operator

	Relational Operator
*/

/*
	Arithmetic operator

	+ - addition
	- - substraction
	* - multipication or product
	/ - dividation
	% - modulus or remainder operator
*/

/*
	Bitwise operator
	
	& - AND
	| - OR
	^ - exclusive OR
*/

/*
	Shift Operator

	>> - right shift operator
	<< - left shift operator
*/

/*
	Operator types - operand

	unary - 1 operand
	binary - 2 operand
	ternary - 3 operand
*/

/*
	Unary operator - has one operand

	+ : plus sign
	+a, +5

	- : minus sign
	-a, -5

	++ : increment
	i++ or ++i

	-- : decrement
	i-- or --i

	! : NOT
	!(statemnt) = false, !false = true, !true = false
*/

/*
	Binary operators - has two operand

	+ : plus
	x + y

	- : minus
	x - y

	* : mulipication or product
	x * y

	/ : dividation
	x / y

	% : modulus or mod (in short)
	x % y

	& : Bitwise AND
	x & y

	! : Bitwise OR
	x & y

	^ : Exclusive OR
	x ^ y
*/
