#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there*/

/**
 * main - entry point
 *
 * Description: print last digits
 * Return: 0 success
 */

int main(void)

{
	int n, l_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	scanf("%d", &n);

	l_dgt = n % 10;

	if (l_dgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_dgt);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0 and is zero\n", n);
	}
	else if (l_dgt > 6 && l_dgt != 0)
	{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, l_dgt);
	}
	return (0);
}
