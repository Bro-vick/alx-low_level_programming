#include "search_algos.h"
#include <math.h>

/**
 * Jump Search Algorithm pseudocode
 *
 * 1) First we get the jump step (the square root of the array size)
 * 2) If the iterator is less than or equal to the size, the iterator increases by jump.
 * 3) if the array[i] >= the value, we return to the previous jump and do a linear search from the prev to the current jump.
 * for example: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
 * size = 10
 * jump = 3
 * value = 7
 */
int jump_search(int *array, size_t size, int value)
{
	int jump; 
	size_t i, temp;
	
	jump = sqrt(size);
	for (i = jump; i <= size; i += jump)
	/* i = 3 i + 3 = 6 */
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		/* is 4 > 7 */
		{
			temp = i;
			/* temp = 6 */
			i = i - jump;
			/* i = 6 - 3 = 3*/
			for (i = i; i <= temp; i++)
			/*            */
			{
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
