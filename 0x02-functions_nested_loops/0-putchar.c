#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Prints putchar
 * Return: Always 0 success
 */


int main(void)
{
		char var[] = "_putchar";
		int i;
		int lvel = sizeof(var) / sizeof(var[0]);

		for (i = 0; i < lvel - 1; i++)
		{
			_putchar(var[i]);
		}
		_putchar('\n');

		return (0);
}
