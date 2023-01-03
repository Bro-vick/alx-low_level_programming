#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted arrayay of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	int i, start, end, mid;
	start = 0;
	end = size - 1;
	mid = (start + end)/2;
	

	while (start <= end)
	{
		if ( array[mid] == value)
       			return (mid);
		printf("Searching in array:");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		if (array[mid] < value)
		{
			start = mid + 1;
			mid = (start + end)/2;
		}
		else 
		{
			end = mid - 1;
			mid = (start + end)/2;
		}
	}
	return (-1);
}




	
	





