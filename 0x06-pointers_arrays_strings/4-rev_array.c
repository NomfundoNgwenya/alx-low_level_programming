#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers.
 *
 * @a: Pointer to the first element of the array.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
