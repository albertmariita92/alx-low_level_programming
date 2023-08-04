#include "main.h"

/**
 * get_endianness - The endianness is checked
 *
 * Return: The big endian is 0 while little endian is 1
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
