#include "main.h"

/**
 * set_bit - sets a bit's value to 1 at a specific index
 * @n: The unsigned long int's pointer.
 * @index: The bit's index.
 *
 * Return: 1 for if working and -1 for the opposite.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
