#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @void: Null value
 *
 * Description: Print numbers from 0 to 9
 * Return: 0 value
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
