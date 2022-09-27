#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to the byte buffer
 * @b: constant byte
 * @n: number of buffer spaces to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
