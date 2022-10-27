#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @num: number which contains the bit
 * @index: index at which bit must be found
 *
 * Return: bit (Success) or -1 (error)
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bit = (num >> index) & 1;

	return (bit);
}
