
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -starting point
 *
 * description - check random number if +ve or -ve
 *
 * return: (0) Always true
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
