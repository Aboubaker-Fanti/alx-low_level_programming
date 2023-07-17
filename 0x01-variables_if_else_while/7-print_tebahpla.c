#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: Print alphabet in reverse
 * Return: 0 value
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
