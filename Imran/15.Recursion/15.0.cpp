
/*
	Recursion basics with main

*/

#include <iostream>
using namespace std;

int main(int pritha, char** imran)
{
	// base condition
	if (pritha == 10) {
		return 0;
	}

	cout << "pritha is: " << pritha << endl;

	main(pritha + 1, imran);
	
	return 0;
}