#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: Function parameter
 * Return: 1 on success and 0 on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
