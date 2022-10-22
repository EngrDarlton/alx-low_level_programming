#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Print all numbers in lowercase
 * Return: 0 Success
 */

int main(void)
{
	char x;
	char y = '0';

	while (y <= '9')
	{
		putchar(y);
		y++;
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
