#include <unistd.h>

/**
 * _putchar - write the character d on stdout
 * @d: The character to print
 *
 * Return: 0 every time run program.
 */
int _putchar(char d)
{
	write(1, &d, 1);
	return (0);
}
