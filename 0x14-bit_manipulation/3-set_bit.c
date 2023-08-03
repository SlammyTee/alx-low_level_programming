#include "main.h"

/**
  * set_bit - Sets the value of a bit at a given index to 1
  * at a given index
  *@n: pointer of unsigned long int
  *@index: Index of bit
  *
  * Return: -1 if an error occurs, 1 if it worked
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
