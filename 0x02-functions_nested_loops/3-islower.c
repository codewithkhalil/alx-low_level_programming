#include "main.h"

/**
 * _islower -  fn to print lower case
 * @c: The character to print
 *
 * Return: if lowercase 1 and 0 if otherwise
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
