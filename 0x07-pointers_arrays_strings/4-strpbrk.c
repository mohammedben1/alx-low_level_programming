#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string to be searched
 *
 * @accept: matches one of the bytes, if no set is matched - NULL
 *
 * Return: a pointer to the matched byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
