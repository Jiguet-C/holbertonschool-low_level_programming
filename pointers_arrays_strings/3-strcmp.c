#include "main.h"

/**
* _strcmp - compare 2 strings
* @s1: string s1
* @s2: string s2
* Return: when different, s1 - s2 
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	}
	return (s1[i] - s2[i]);
}
