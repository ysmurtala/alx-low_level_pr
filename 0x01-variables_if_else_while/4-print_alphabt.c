#include <stdio.h>

/**
 * main - this is my main
 * Return: always zero
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	if (i != 'q' && i != 'e')
	putchar(i);

	return (0);
}
