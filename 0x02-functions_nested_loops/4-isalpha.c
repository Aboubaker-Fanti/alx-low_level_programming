#include "main.h"

/**
 * _isalpha - checking for alphabit character
 *
 * @c: is c an integer argument
 *
 * Return: Always retun 0.
 */

int _isalpha(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
