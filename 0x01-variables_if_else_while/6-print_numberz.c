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
		putchar(x + '0');
	}
	putchar('\n');
	return (0);

}
