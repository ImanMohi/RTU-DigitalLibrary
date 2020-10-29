/*Rotating a randomly allocated matrix by 90 degrees clockwise or anticlockwise*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void reverse_rows(int *arr, int N)
{
	int k, i, j;
	for (i = 0; i < N; i++)
	{
		k = N - 1;
		for (j = 0; j < k; j++)
		{
			int temp;
			temp = *(arr + i * N + j);
			*(arr + i * N + j) = *(arr + i * N + k);
			*(arr + i * N + k) = temp;
			k--;
		}
	}
}

void reverse_column(int *arr, int N)
{
	int k, i, j;
	for (i = 0; i < N; i++)
	{
		k = N - 1;
		for (j = 0; j < k; j++)
		{
			int temp;
			temp = *(arr + j * N + i);
			*(arr + j * N + i) = *(arr + k * N + i);
			*(arr + k * N + i) = temp;
			k--;
		}
	}
}

void transpose(int *arr, int N)
{	int i, j;
	for (i = 0; i < N; i++)
	{	for (j = i; j < N; j++) {
			int temp;
			temp = *(arr + i * N + j);
			*(arr + i * N + j) = *(arr + j * N + i);
			*(arr + j * N + i) = temp;
		}
	}
}

void print_matrix(int *arr, int N)
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%d\t", *(arr + i * N + j));

		printf("\n");
	}
	printf("\n");
}

void rotateMatrixCW(int *arr, int n) {
	transpose(arr, n);
	reverse_rows(arr, n);
}
void rotateMatrixACW(int *arr, int n) {
	transpose(arr, n);
	reverse_column(arr, n);
}

int main()
{

	int upper = 10, lower = 1; int choice;
	srand(time(0));
	//Here n will be the row and column size of the square 2-D matrix
	int n = (rand() % (upper - lower + 1)) + lower;

	int *arr = (int *)malloc(n * n * sizeof(int)); //Created the square matrix dynamically

	//the following for loop will  assign random values between 1 and 100 to the 2-D matrix
	upper = 100; lower = 1;
	int i, j;
	for (i = 0; i <  n; i++)
		for (j = 0; j < n; j++)
			*(arr + i * n + j) = (rand() % (upper - lower + 1)) + lower;


	/* Code for further processing and free the
	   dynamically allocated memory */
	printf("\nThe matrix before rotation\n");
	print_matrix(arr, n);

	printf("\nEnter 1 to rotate the matrix clockwise\nEnter 2 to rotate the matrix anticlockwise\n");
	scanf("%d", &choice);
	if (choice == 1) {
		rotateMatrixCW(arr, n);
		printf("\nThe matrix after rotation clockwise:\n");

		print_matrix(arr, n);
	}
	else if (choice == 2) {
		rotateMatrixACW(arr, n);
		printf("\nThe matrix after rotation anticlockwise:\n");

		print_matrix(arr, n);
	}
	else
		printf("\nINVALID CHOICE!\n");


	return 0;
}
