// Binary Search algorithm for sorted arrays

/*
* Locate the middle element of the array and compares with the key.
* If equal, return the index of the element.
* If not search one half of the array.
* If key < middle element search left, else search right.
* Repeat the process.
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

size_t binarySearch(int arr[], int key, int low, int high);

int main(void)
{
	int a[SIZE] = { 12, 14, 15, 18, 23, 25, 45, 56, 78, 105 };

	size_t result = binarySearch(a, 23, 0, 9);

	if (result != -1)
	{
		printf("Element is at index %d\n\n\n", result);
	}
	else
	{
		puts("Element is not found\n\n\n");
	}

}

size_t binarySearch(int arr[], int key, int low, int high)
{
	while (low <= high)
	{
		// Get the middle element of the array
		size_t mid = (low + high) / 2;

		// if key is the mid element, return mid 
		if (key == arr[mid])
		{
			return mid;
		}
		// if key is less than mid element, set new high index
		else if (key < arr[mid])
		{
			high = mid - 1;
		}
		// if key is higher than the mid element, set new low index
		else {
			low = mid + 1;
		}
	}
	
	// key not found
	return -1;

}