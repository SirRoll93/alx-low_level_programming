#include "main.h"

/**
 * binary_to_uint - convert the binary number to a decimal
 * @b: points to a string of 0's and 1's
 * Return: decimal format of the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0; /* dec is the variable to hold the decimal format */

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			dec = (dec << 1) | 1;
		else if (*b == '0')
			dec <<= 1;
		else
			return (0);
		b++;
	}

	return (dec);
}
