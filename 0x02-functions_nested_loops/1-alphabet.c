#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry Point
 * Description: Print alphabeth with putchar
 * Return: 0 Success
 */

void print_alphabet(void)
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
