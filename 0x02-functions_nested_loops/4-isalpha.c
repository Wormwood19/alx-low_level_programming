#include "main.h"

/**
 * _isalpha - checks if it's a letter, lowercase or uppercase.
 *
 * @c: the character to test.
 *
 * Return: 1 if true, 0 if not.
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if
		(c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
			return (0);
}
