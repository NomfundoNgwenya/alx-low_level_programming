#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @index: The index of the bit to retrieve.
 * @n: The number from which to get the bit
 *
 * Return: value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
