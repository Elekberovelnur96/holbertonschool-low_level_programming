#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix (casted as int *)
 * @size: The size of the matrix (number of rows and columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];           /* Main diagonal: row = col */
		sum2 += a[i * size + (size - 1 - i)]; /* Secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
