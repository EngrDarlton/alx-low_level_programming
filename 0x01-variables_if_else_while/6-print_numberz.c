#include <stdio.h>

/**
 * main - Entry point
 * Description: Print numbers with putchar
 * Return: 0 Success
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);

}
