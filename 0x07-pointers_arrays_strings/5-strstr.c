#include "main.h"

/**
 * _strstr - locates a substring
 * @heystack: string in which to check for needle
 * @needle: sunstring to find in heystack
 *
 * Return: pointer to beginning of needle in heystack or NULL if no match
 */
char *_strstr(char *heystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (heystack[i])
	{
		while (needle[j] && (heystack[i] == needle[0]))
		{
			if (heystack[i + j] == needles[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			j++;
			j = 0;
		}
		else
			return (heystack + i);
	}
	return (0);
}
