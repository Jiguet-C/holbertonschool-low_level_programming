#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
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
	}
	if (s[i] == '\0')
		return (&s[i]);

	return (NULL);
}
