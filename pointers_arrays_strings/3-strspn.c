#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to search
 * @accept: bytes to accept
 *
 * Return: number of bytes in initial segment of s consisting of accept bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
	}
	return (i);
}
