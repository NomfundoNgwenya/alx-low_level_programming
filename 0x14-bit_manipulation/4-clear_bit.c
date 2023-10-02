#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @index: is the index, starting from 0 of the bit you want it to set
 * @n: Pointer to the number in which to clear the bit.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}