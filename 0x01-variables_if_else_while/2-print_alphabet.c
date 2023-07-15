#include <stdio.h>
#include <stdlib.h>

/**
 * main => Entry point
 * @void: Null value
 *
 * Description: Print alphabet lowercase
 * Return: 0  value
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
