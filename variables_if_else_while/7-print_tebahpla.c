#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--) /* ASCII: 'z' = 122, 'a' = 97 */
		putchar(ch);
	putchar('\n');

	return (0);
}

