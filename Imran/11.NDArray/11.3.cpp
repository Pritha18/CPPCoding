// 11.3. Write a program that adds two matrices

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	return 0;
}

/*
	Matrix addition and substraction

	matrix A,     matrix B,  Matrix C = A + B
	1 2 3		1 2 1
	4 5 6		1 5 7
	1 2 3		2 4 6

	A + B and A - B can happen since, they have same row and column



	matrix A,     matrix B,  Matrix C = A + B is not possible
	1 2 3		1 2 
	4 5 6		1 5 
	1 2 3		2 4

	A + B and A - B is not possible since, they don't have same number of row and column
*/

/*
	Matrix Multipication

	matrix A,     matrix B,  Matrix C = A * B is possible
	1 2 3		1 2 1
	4 5 6		1 5 7
	1 2 3		2 4 6

	A * B is possible since, A column number and B row number is same

	matrix A,     matrix B,  Matrix C = A * B is possible
	1 2 3		1 2 1
	4 5 6		1 5 7
			2 4 6

	A * B is possible since, A column number and B row number is same

	matrix A,     matrix B,  Matrix C = A * B is possible
	1 2		1 2 1
	4 5		1 5 7
	1 2		

	A * B is possible since, A column number and B row number is same


	matrix A,     matrix B,  Matrix C = A * B is not possible
	1 2 3		1 2 1
	4 5 6		1 5 7
	2 4 6		

	A * B is not possible since, A column number and B row number is not same
*/