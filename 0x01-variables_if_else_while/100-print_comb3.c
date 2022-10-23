#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Description: Prints combinations
 * Return: (0) Success
 */

int main(void)
{
	int x, y;

	for (x = '0'; x <= '9' ; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);

		if (x != '9' || (x == '8' && y != '9'))
		{
			putchar(',');
			putchar(' ');
		}
	}
}
}
	putchar('\n');
	return (0);

}
