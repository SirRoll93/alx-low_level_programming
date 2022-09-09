#include <stdlib.h>
#include <time.h>
/* main - progran starting point */

/* Return: Always 0 (Success) */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n==0)
	{
		printf("%i is zero\n", n);
	}
	else if (n<0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		print("%i is positive\n", n);
	}
	return (0);
}
