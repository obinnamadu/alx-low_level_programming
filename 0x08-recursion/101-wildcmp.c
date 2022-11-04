#include <stdio.h>
#include "main.h"
/**
 * wildcmp - Entry Point
 * @s1: input
 * @s2: input
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 >= 'a' && *s1 <= 'z' || *s2 >= 'a' && *s2 <= 'z')
		if (strcmp(s1, s2) < 1)
			return (0);
		if (strcmp(s1, s2) >= 1)
			return (1);
}
