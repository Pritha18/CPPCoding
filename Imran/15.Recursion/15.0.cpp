
/*
	Recursion basics with main

*/

#include <iostream>
using namespace std;

// using console arguments
int main(int pritha, char** imran)
{
	// base condition
	if (pritha == 5) {
		return 0;
	}

	cout << "pritha is: " << pritha << endl;

	main(pritha + 1, imran);
	
	return 0;
}

/*
example of baseless recursion

Boss going on business trip with his assisstant

Assisstant's huband calling his girlfriend to say that she will be out for few days

So, he is asking to go with him for a tour

Now, the gf is a home tutor.

since, she is going on a trip with her bf

she cancel all tuitions in that week

Now,
since her student now have free time

He is asking his father to go on a trip.

Now, his father is the boss

Since, the boss needs to go on a trip with his son, he cancels the business trip

Since, he cancels the business trip, his assistant gonna stay at home

Her husband gonna cancel the trip

The gf gonna cancel the vacation of her student

Student gonna cancel the trip with father(boss)
*/