#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of the elements in array
 * @value: value to search for
 * Return: index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1;
	int mid, i;

	while (l <= r)
	{
		mid = (l + r) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
