/*
	Best case - 1 2 3 4 5

	T(n) = n (2 + 1 + 1)
	     = 4n

	S(n) = n + 3
*/

void insertion_sort(int ar[], int size)
{

	// n
	// 1
	for (int i = 1; i < size; ++i) // n
	{
		// 1
		int hole_pos = i; // 1
		
		// 1
		for(int j = i-1; j >= 0 && ar[j] > ar[hole_pos]; --j) // n
		{
			// 1
			int temp = ar[j]; // 1
			ar[j] = ar[hole_pos]; // 1
			ar[hole_pos] = temp; // 1

			hole_pos = j; // 1
		}
	}
}

/*
	worst case

	T(n) = n ( 1 + n (1 + 1 + 1 + 1 + 1))
	     = n ( 1 + n * 5)
	     = n (5n + 1)
	     = 5n^2 + n


	S(n) = n + 4
*/