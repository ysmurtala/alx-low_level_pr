#include <stdio.h>

/**
 * main - this is my main
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i < j)
			j++;
			{
				putchar(i);
				putchar(j);
				if (i != '8' || (i == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			j++;
			}
		i++;
		j = '0';
		}
	}
	putchar('\n');
	return (0);
}
