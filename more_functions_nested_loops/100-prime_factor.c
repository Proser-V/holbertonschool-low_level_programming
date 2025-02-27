#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	long n = 612852475143;
	long largest = 0;
	long i;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		largest = n;
	}

	printf("%lu\n", largest);
	return (0);
}
