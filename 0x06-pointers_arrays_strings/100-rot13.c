#include "main.h"
 /**
  * rot13 - encode string using rot13 encoding string
  * @s: string to be encoded
  * Return: encoded string
  */
char *rot13(char *s)
{
	int i, j;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWQYZABCDEFGHIJKLM";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; a[j] != '\0' ; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
