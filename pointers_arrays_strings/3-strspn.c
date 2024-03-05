#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: array to explore
* @accept: character accepted
* Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0' && *accept != '\0' && *s == *accept)
	{
		i++;
		s++;
		accept++;
	}
	return (i);
}
