#include "main.h"

/**
 * array_range -  an array of integers
 * @min: minimum value in array
 * @max: maaximum value in array
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int i, size = (max - min) + 1;
	int *p;

	if (min > max)
		return (NULL);

	p = (int *) malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
