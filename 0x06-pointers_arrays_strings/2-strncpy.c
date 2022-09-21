#include "main.h"

/**
 * _strncpy - Copies at most an inputted number of bytes
 * from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
