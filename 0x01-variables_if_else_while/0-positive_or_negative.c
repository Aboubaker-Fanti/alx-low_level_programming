#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 *if n > 0 we will print is positive &
 * if n < 0  we will print negative && if
 * n eqal 0 we will print zero that's all
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
