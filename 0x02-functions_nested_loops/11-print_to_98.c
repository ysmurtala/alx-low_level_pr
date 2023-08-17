#include "main.h"
#include <stdio>

/**
 * print_to_98 - print all natural number to 98
 * @n: number to start from
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	if (n >= 0 && N <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
                {       
                        printf("%d", i);
			if (i != 98)
                                printf(", ");
                }
                printf("\n");
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
                {       
                        printf("%d", i);
			if (i != 98)
                                printf(", ");
                }
                printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
	}

}
