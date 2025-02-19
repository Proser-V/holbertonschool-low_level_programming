#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f; /* first digit */
	int l; /* last digit */

	for (l = 0; f < 9; f++)
	{
		for (l = f + 1; l < 10; l++)
		{
			putchar(f +'0');
			putchar(l + '0');
			if (f != 8 || l != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
