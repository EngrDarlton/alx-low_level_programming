#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Description: Prints combinations
 * Return: (0) Success
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9' ; x++)
	{
		putchar(x);

		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);

}
