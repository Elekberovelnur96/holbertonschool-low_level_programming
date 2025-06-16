#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *              followed by a new line. Uses only putchar twice, no char type.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 48); /* ASCII value of '0' is 48 */
	putchar('\n');

	return (0);
}

