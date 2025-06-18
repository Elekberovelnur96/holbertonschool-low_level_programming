#include "main.h"

/**
 * print_alphabet_x10 - Kiçik hərflərlə əlifbanı 10 dəfə çap edir.
 *
 * Təsvir: Bu funksiya 'a'-dan 'z'-yə qədər olan hərfləri və yeni sətr simvolunu
 * 10 dəfə ard-arda çap edir. Yalnız 2 dəfə _putchar funksiyası istifadə olunur.
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (alphabet[j] != '\0')
		{
			_putchar(alphabet[j]);
			j++;
		}
	}
}
