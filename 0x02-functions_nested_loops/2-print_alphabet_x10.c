#include "main.h"
/**
 * print_alphabet_x10 - this function will print alphabet in lower case x10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);

		_putchar('\n');
	}
}

