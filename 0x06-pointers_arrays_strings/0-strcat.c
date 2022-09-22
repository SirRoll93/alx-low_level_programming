#include "main.h"

int get_length(char *s);

/**
 * _strcat - Concatenates the string pointed to by @src,
 * including the terminating null byte,
 * to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int initial_end;
	int j;

	initial_end = get_length(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[initial_end + j] = src[j];
		j++;
	}
	dest[initial_end + j] = '\0';

	return (dest);
}

/**
 * get_length - returns the length of a string
 * @s: String whose length we wish to determine
 *
 * Return: Length of s
 */
int get_length(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
