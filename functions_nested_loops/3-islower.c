#include "main.h"

/**
 * _islower - checks if a character is a lowercase letter.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
