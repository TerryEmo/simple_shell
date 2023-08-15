#include "main.h"

/**
 * _strcmp - Function differentiates two string
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Integer value
*/

int _strcmp(char *s1, char *s2)
{
	int counter = 0;

	while ((s1[counter] != '\0') && (s2[counter] != '\0'))
	{
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}

		counter++;
	}
	return (0);
}
