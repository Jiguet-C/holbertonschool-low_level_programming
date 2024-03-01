#include "main.h"

/**
* rev_string - string in reverse
* @s: string
* Return: void
*/

void rev_string(char *s)
{
	int i;
	int nombreCaract;
	char temporaire[500];

	for (nombreCaract = 0 ; s[nombreCaract] != '\0' ; nombreCaract++)
	{
	}

	for (i = (nombreCaract - 1), nombreCaract = 0 ; i >= 0 ; i--, nombreCaract++)
		temporaire[i] = s[nombreCaract];

	for (i = 0; i < nombreCaract; i++)
		s[i] = temporaire[i];
}
