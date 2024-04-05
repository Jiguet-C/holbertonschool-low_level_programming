#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);

	if (index > max_bits)
		return (-1);

	/*décale de "index" fois tous les bits du nombre n*/
	/*le bit voulu est donc tout à droite, en position de poids faible*/
	/*&1 permet de checker si le bit de poids faible est un 1*/
	bit = ((n >> index) & 1);

	return (bit);
}
