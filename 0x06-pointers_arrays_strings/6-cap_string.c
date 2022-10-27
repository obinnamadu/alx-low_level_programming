#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '?' ||
			str[i - 1] == '!' ||
			str[i - 1] == '"' ||
			str[i - 1] == ')' ||
			str[i - 1] == '(' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			str[i - 1] == '.' || i == 0)
			str[i] -= 32;

		i++;
	}

	return (str);
}
