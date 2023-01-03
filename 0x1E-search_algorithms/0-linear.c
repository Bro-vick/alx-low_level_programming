#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return:
 *
 * Search Algorithm
 * 1) Loop through the array
/ 2) compare each index to the target value
// 3) if the value at an index matches the target return the index
// 4) if the value is not present in the array or if it is null, return -1 
*/
int linear_search(int *array, size_t size, int value){
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]); 
		if (array[i] == value)
			return (i);
	}
	return (-1);
}	





