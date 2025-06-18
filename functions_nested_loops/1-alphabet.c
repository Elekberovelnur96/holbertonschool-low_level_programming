#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
    char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
    int i = 0;

    while (alpha[i] != '\0')
    {
        _putchar(alpha[i]);
        i++;
    }
}
