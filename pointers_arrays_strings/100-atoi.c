#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: converted integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num_found = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_found = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (num_found)
			break;
		i++;
	}

	return (sign * (int)result);
}
