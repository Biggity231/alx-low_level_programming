#include "main.h"

/**
 * clear_bit - Sets value of a bit at a given index to 0.
 * @n: The pointer to a bit.
 * @index: An index to set a value to  0.
 *
 * Return: -1 0r 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
