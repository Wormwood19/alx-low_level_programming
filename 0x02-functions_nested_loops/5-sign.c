#include "main.h"

/**
 * print_sign - 1 if n is greater 0, 0 if  n is greater than 0,
 * -1 if n is less than zero.
 *
 *  @n: the character to be tested.
 *
 *  Return: 1 if n is greater 0, 0 if  n is greater than 0,
 *   * -1 if n is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{ _putchar('+');
		return (1);
	} else if (n == 0)
		{ _putchar('0');
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		return (2);
}
