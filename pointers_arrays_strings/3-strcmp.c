#include "main.h"

/**
 * _strcmp - compare twe strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if similar, positive number if s1 greater than s2
 * negative if s2 greater than s1
 */

int _strcmp(char *s1, char *s2)
{
	unsigned int count1 = 0;
	unsigned int count2 = 0;

	while (s1[count1] != '\0')
	{
		count1++;
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}
	if (count1 > count2)
	{
		return (count2 - count1);
	}
	else if (count1 < count2)
	{
		return ((count1 - count2) * -1);
	}
	else
	{
		return (0);
	}
}
