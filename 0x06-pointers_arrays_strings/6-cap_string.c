#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * cap_string - updates the value of a pointer to 98
 * @s: a pointer
 *
 *
 * Return: char * ALWAYS
 */
char *cap_string(char *s)
{
	int i, sz, j, k;

	i = 0;
	while (s[i] != '\0')
		i++;
	sz = i - 1;


	for (i = 1; i <= sz; i++)
	{
		if (s[i - 1] == ' ' || s[i - 1] == ';'
|| s[i - 1] == '.' || s[i - 1] == '!' ||
s[i - 1] == '?' || s[i - 1] == '('
|| s[i - 1] == ')' || s[i - 1] == '{'
|| s[i - 1] == '}' || s[i - 1] == '\n')
		s[i] = toupper(s[i]);
	}

	return (s);
}
