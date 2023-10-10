#include <unistd.h>

/**
 * _putchar - writes the character c to stdout 
 * @c: print character
 *
 * Return: On success 1.
 * when fund error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
