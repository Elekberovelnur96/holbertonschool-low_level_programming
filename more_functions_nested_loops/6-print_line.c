#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: Number of times the character '_' should be printed.
 *
 * This function will print '_' character 'n' times.
 * If 'n' is 0 or less, it will only print a newline character.
 */
void print_line(int n)
{
    int i;  /* Loop counter for printing '_' character */

    /* Check if 'n' is valid for drawing the line */
    if (n <= 0)
    {
        _putchar('\n');  /* Only newline for non-positive 'n' values */
    }
    else
    {
        for (i = 0; i < n; i++)
        { 
            _putchar('_');  /* Print '_' character 'n' times */
        }
        _putchar('\n');      /* End the line with a newline character */
    }
}
