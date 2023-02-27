#include "main.h"

/**
 * rev_string -  prints a string, in reverse
 *
 * @s: input string
 *
 * Return: none
 */

void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = string_length(s);
	begin  = s;
	end    = s;

	for (c = 0; c < length - 1; c++)
		end++;

	for (c = 0; c < length/2; c++)
	{
		temp   = *end;
		*end   = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
