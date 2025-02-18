#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
		{
		ch++;
		}
		else if (ch == 'e')
		{
		ch++;
		}
		else
		{
		putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
