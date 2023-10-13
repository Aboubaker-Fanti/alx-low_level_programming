#include "holberton.h"

/**
 * _isupper - define if a character is uppercase
 *
 * Description: Print alphabet with _putchar
 * @c: charater
 * Return: 1 or 0 if true or fals
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
