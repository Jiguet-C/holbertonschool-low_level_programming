#include "main.h"
#define NULL 0

/**
* _strchr - fills memory with a constant byte
* @s: array to explore
* @c: the character to find
* Return: pointer to adress of s or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
		if (s[i] == '\0')
			return (NULL);
	}
	return (NULL);
}
