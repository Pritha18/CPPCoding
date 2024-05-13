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


/*
	merge

	T(n) = 3 + n ( 1 + 1 + 1 + 1 + 1 + 1 )+ n (1 + 1 + 1) + n (1 + 1 + 1)
	     = 3 + 6n + 3n + 3n
	     = 12n + 3


*/

void merge(int left[],int size_left,int right[], int size_right, int ar[])
{
	int i = 0, j = 0, k = 0; // 3

	while(i < size_left && j < size_right) //  n
	{
		if (left[i] <= right[j]) // 1
		{
			ar[k] = left[i]; // 1

			i++; // 1
		}
		else
		{
			ar[k] = right[j]; // 1

			j++; // 1
		}

		k++; // 1
	}

	while(i < size_left) // n
	{
		ar[k] = left[i]; // 1
		
		i++; // 1
		k++; // 1
	}

	while(j < size_right) // n
	{
		ar[k] = right[j]; // 1

		j++; // 1
		k++; // 1
	}
}


/*
	T (n) = 5 + n / 2 + n / 2 + T(n / 2) + T (n / 2) 

	T (n / 2) = 5 + n / 4 + n / 4 + T (n / 4) + T (n / 4)

	T (n / 2^k) = 

*/

void merge_sort(int ar[], int size)
{
	if (size < 2) // 1
	{
		return; // 1
	}

	int mid = size/2; // 1

	int left[mid],right[size-mid]; // 2

	for (int i = 0; i < mid; ++i) // n / 2
	{
		left[i] = ar[i]; // 1
	}

	for (int i = mid; i < size; ++i) // n / 2
	{
		right[i-mid] = ar[i]; // 1
	}

	merge_sort(left,mid); // T (n / 2)
	merge_sort(right,size-mid); // T (n / 2)

	merge(left,mid,right,size-mid,ar);
}