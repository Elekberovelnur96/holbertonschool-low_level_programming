#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function uses _putchar to print all lowercase letters
 * of the alphabet, from 'a' to 'z', followed by a newline character.
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
}
