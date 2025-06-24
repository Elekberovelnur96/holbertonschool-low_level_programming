#include <stdio.h>

/**
 * main - Fizz Buzz test
 *
 * Prints numbers from 1–100. Multiples of 3 replaced with Fizz,
 * multiples of 5 replaced with Buzz, both with FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", i);
        }

        if (i != 100)
            printf(" ");
    }

    printf("\n");
    return (0);
}
