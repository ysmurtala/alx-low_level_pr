#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	i = longi - 1;
	for (j = 0 ; j <= i ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}

