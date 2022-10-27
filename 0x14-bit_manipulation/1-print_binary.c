#include "main.h"

/**
 * print_binary - converts the decimal format number into binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int temp;
	static int count;

	if (n == 0 && count > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = (n & 1);
	count++;
	print_binary(n >>= 1);
	_putchar('0' + temp);
}
