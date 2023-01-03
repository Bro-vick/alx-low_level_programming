#include "search_algos.h"

/**
 * Binary search ALgorithm
 * 1) Initialize the variables  start: to 0,end: to n -1,and the midpoint: would be (start + end)/2  
 * 2) compare if the array[mid] at the midpoint is the target return array[mid]
 * 3) if array[mid] is < the target assign first to mid + 1
 * 4) if array[mid] is > the target assign end to mid - 1
 * for example array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
 * start = 
 * new array = [6, 7, 8, 9, 10]
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




	
	





