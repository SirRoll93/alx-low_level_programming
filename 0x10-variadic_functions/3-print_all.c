#include "variadic_functions.h"

/**
 * print_all - prints all the arguments that are passed to it in any format
 * @format: format of the argument
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j, sep = 0;
	char *str;
	char c_args[] = "cifs";
	va_list args;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (c_args[j])
		{
			if (format[i] == c_args[j] && sep)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), sep = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), sep = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), sep = 1;
				break;
			case 's':
				str = va_arg(args, char *), sep = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	} va_end(args), printf("\n");
}
