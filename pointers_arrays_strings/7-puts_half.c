#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints second half of a string
 * @str: input string
 *
 * Description: If the number of characters is odd,
 * the function prints the last n characters where
 * n = (length_of_the_string + 1) / 2
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

