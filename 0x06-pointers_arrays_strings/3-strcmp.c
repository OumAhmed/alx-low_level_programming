#include "main.h"

/**
* _strcmps - Compatres pointers to two strings
* @s1: A ponter to the first styring to be compared
* @s2: A pointer to the second string to be compared
* Return: if str1 < str2, the negative differnce of the first unmatched charcters
* if str1 == str 2, 0
* if str1 > str2, the positive difference of the fisrt unmatched characters
*
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
