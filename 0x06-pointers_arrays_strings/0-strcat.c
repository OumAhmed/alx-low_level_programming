#include "main.h"
#include <stdio.h>

/**
* _stract - Concentenates two strings
* @dest: the destination string
* @src: the soirce string
* Return: A pointer to the resulting string dest
*/

char *_stract(char *dest, char *src)
{
	int dlen = 0, i;
	while (dest[dlen])
	{
		dlen++;
	}
	
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	
	dest[dlen] = '\0';
	return (dest);
}
