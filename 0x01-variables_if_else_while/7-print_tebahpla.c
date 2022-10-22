#include <stdio.h>

/**
 * main - Entry Point
 * Description: Print alphabeth backwards
 * Return: 0 Success
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar (alpha);
	}
	putchar ('\n');
	return (0);
}
