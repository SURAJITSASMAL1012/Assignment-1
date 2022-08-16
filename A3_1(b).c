// SORTING//
// Assignment 3:program 1(b)//
#include <stdio.h>

void sort(int *arr, int n)
{
	int temp, j, i;
	printf("Enter the elements of the array: \n");
	for (i = 0; i < n; i++)
	{
		printf("The element %d: ", i);
		scanf("%d", (arr + i));
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (*(arr + i) > *(arr + j))
			{
				temp = *(arr + j);
				*(arr + j) = *(arr + i);
				*(arr + i) = temp;
			}
		}
	}
	printf("\nThe sorted array is:");
	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(arr + i));
	}
}
int main()
{
	int n;
	printf("Enter the number of elements to be stored: ");
	scanf("%d", &n);
	int arr[n];
	sort(arr, n);

	return 0;
}
