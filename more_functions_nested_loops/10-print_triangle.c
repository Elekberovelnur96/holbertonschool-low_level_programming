#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle of '#' characters.
 * @size: The size of the triangle.
 *
 * If size is 0 or less, the function only prints a newline.
 */
void print_triangle(int size)
{
    int i, j;
    if (size <= 0)
    {
        _putchar('\n');
        return;
    }
    for (i = 1; i <= size; i++)
    {
        /* Print spaces first */
        for (j = 1; j <= size - i; j++)
            _putchar(' ');
        /* Then the '#' characters */
        for (j = 1; j <= i; j++)
            _putchar('#');
        _putchar('\n');
    }
}
