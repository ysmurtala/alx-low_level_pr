#include <stdio.h>

/**
 * main - this is the main
 * Return: always zero
 */

int main(void) 
{
char i;

for (i = 'a' ; i <= 'z' ; i++)
putchar(i);

for (i = 'A' ; i <= 'z' ; i++)
putchar(i); 
putchar('\n');
return (0);

}
