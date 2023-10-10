#include "main.h"
/**
 * main - print _putchar, fllowd by a new linees
 * Return: if the is no error return  0
 */
int main(void)
{
	char string[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(string[c]);
	}
	_putchar("\n");
	return (0);
}
