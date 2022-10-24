#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Description: Print alphabeth with putchar
 * Return: 0 Success
 */

int main(void)
{
	char letters;

	letters = 'a';
	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
