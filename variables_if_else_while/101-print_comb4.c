#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f = 0; /* first digit */
	int m = 0; /* middle digit */
	int l = 0; /* last digit */

	for (l = 0; m < 9; f++)
	{
		for (m = f + 1; f < 10; m++)
		{
			for (l = m + 1; l < 10; l++)
			{
				putchar(f + '0');
				putchar(m + '0');
				putchar(l + '0');
			if (f != 7 || m != 8 || l != 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
