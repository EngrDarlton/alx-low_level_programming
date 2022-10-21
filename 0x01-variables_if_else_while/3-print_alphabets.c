#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print upper and lower cases
 * Return: 0 Success
 */

int main(void)
{
	int ah;

	for (ah = 'a'; ah <= 'z'; ah++)
	{
		putchar(ah);
	}
	for (ah = 'A'; ah <= 'Z'; ah++)
	{
		putchar(ah);
	}
	putchar('\n');
	return (0);
}
