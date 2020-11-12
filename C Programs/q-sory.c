
#include <stdio.h>
#define bool int

void quickSort(int*, int, int);

bool hasArrayTwoCandidates(
	int A[], int arr_size, int sum)
{
	int l, r;

	
	quickSort(A, 0, arr_size - 1);

	l = 0;
	r = arr_size - 1;
	while (l < r) {
		if (A[l] + A[r] == sum)
			return 1;
		else if (A[l] + A[r] < sum)
			l++;
		else // A[i] + A[j] > sum
			r--;
	}
	return 0;
}

void exchange(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int A[], int si, int ei)
{
	int x = A[ei];
	int i = (si - 1);
	int j;

	for (j = si; j <= ei - 1; j++) {
		if (A[j] <= x) {
			i++;
			exchange(&A[i], &A[j]);
		}
	}
	exchange(&A[i + 1], &A[ei]);
	return (i + 1);
}


void quickSort(int A[], int si, int ei)
{
	int pi; /* Partitioning index */
	if (si < ei) {
		pi = partition(A, si, ei);
		quickSort(A, si, pi - 1);
		quickSort(A, pi + 1, ei);
	}
}

int main()
{
	int A[] = { 1, 4, 45, 6, 10, -8 };
	int n = 16;
	int arr_size = 6;

	if (hasArrayTwoCandidates(A, arr_size, n))
		printf("Array has two elements with given sum");
	else
		printf("Array doesn't have two elements with given sum");

	getchar();
	return 0;
}
