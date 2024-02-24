#include <iostream>
using namespace std;

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


int main(int argc, char const *argv[])
{
	cout<<"enter the array size"<<endl;
	int n;
	cin>>n;

	int ar[n];

	cout<<"enter the array elements"<<endl;

	for (int i = 0; i < n; ++i)
	{
		cin>>ar[i];
	}

	// merge sort

	merge_sort(ar,n);

	for (int i = 0; i < n; ++i)
	{
		cout<<ar[i]<<" ";
	}

	cout<<endl;

	return 0;
}

/*
	merge sort

	Divide and conquer algorithm

	running time
	best - avg - worst - n log n

	memory
	best - avg - worst - n log n

*/