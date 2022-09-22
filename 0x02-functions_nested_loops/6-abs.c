#include "main.h"

/**
 * _abs - Writes a function that computes the absolute value of an integer
 *
 * @i: the integer to be converted.
 *
 * Return: 0 (success).
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}

