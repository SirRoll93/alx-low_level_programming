#include "main.h"

/**
 * main - multiplies two arguments (int)
 * @argc: argument count
 * @argv: Argument vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc < 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
}
