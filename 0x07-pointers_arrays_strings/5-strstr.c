#include "main.h"

/**
 * _strstr - returns pointer to forst char of matching substring
 * @haystack: string to find in substring
 * @needle: substring to be located
 * Return: pointer to first char of matching substring
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')

					return (haystack);
				x++;
			}
			while (haystack[x] == needle[x]);
		}

		haystack++;
	}
	return ('\0');
}
