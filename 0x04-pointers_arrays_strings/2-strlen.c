#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return len;
}
