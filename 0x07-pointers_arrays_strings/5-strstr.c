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
	char *checkHaystack;
	char *checkNeedle;

	while (*haystack != '\0')
	{
		checkHaystack = haystack;
		checkNeedle = needle;

		while (*haystack != '\0' && *checkNeedle != '\0' && *haystack == *checkNeedle)
		{
			haystack++;
			checkNeedle++;
		}
		if (!*checkNeedle)
			return (checkHaystack);
		haystack = checkHaystack + 1;
	}
	return ('\0');
}
