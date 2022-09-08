#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Ending with a value of 0
 */
int main(void)
{
        char size32[] = "Size of a char: 1 byte\nSize of an int: 4 bytes\n
		Size of a long int: 4 bytes\nSize of a long long int: 8 bytes\n
		Size of a float: 4 bytes\n";

	char size64[] = "Size of a char: 1 byte\nSize of an int: 4 bytes\n
		Size of a long int: 8 bytes\nSize of a long long int: 8 bytes\n
		Size of a float: 4 bytes\n";

        puts(size32);

	puts(size64);

        return (0);
}
