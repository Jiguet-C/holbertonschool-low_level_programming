#include "main.h"

/**
* _strlen - length of a string
* @s: string
* Return: number of char
*/

int _strlen(const char *s)
{
	int nombreDeCaracteres = 0;

	while (*s != '\0')
	{
		nombreDeCaracteres++;
		s++;
	}
	return (nombreDeCaracteres);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string of a binary number
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int stringLength;
	int indexPower;
	int result;
	int sum;

	if (b == NULL)
		return (0);

	stringLength = _strlen(b) - 1; /* index commence à 0 */
	indexPower = 0;
	sum = 0;

	while (stringLength >= 0)
	{
		if (b[indexPower] != '0' && b[indexPower] != '1')
			return (0);

		result = (b[stringLength] - '0') << indexPower; /* << équivaut à 2^ */
		sum += result;
		indexPower++;
		stringLength--;
	}
	return (sum);
}
