#include "main.h"
/**
 * _islower - Entry point
 * @c: char to check
 * Description: Checks for lower and upper cses
 * Return: 1 if c is lower
 * 0 if c is upper
 */

int _islower(int c)

{
	if ((c >= 97) && (c <= 122))
		{
					return (1);
				}
		return (0);
}
