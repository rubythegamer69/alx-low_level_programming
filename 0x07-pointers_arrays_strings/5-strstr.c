#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: haystack string.
 * @needle: needle substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *cHaystack;
	char *cNeedle;

	while (*haystack != '\0')
	{
		cHaystack = haystack;
		cNeedle = needle;

		while (*haystack != '\0' && *cNeedle != '\0' && *haystack == *cNeedle)
		{
			haystack++;
			cNeedle++;
		}
		if (!*cNeedle)
			return (cHaystack);
		haystack = cHaystack + 1;
	}
	return ('\0');
}
