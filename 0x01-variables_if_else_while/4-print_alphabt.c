#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: Print alphabet lowercase
 * Return: 0 value
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
