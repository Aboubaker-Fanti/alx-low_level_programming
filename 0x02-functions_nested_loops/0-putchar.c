#include <unistd.h>

/**
 * _putchar - write the character d on stdout
 * @d: The character to print
 *
 * Return: 0 every time run program.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
