#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: character pointed
 * @size: bytes of the buffer
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n"	
	
	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
