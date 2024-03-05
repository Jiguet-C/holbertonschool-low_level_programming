#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: array to explore
* @accept: the character to find
* Return: pointer to adress of s or NULL
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
		if (s[i] == '\0')
			return (&s[i]);
	}
	return (NULL);
}
