#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	long numb, numb2, numb3;
	int a;

	numb = 1;
	numb2 = 2;
	printf("%lu, %lu", numb, numb2);

	for (a = 2; a < 50; a++)
	{
	numb3 = numb + numb2;
	printf(", %lu", numb3);
	numb = numb2;
	numb2 = numb3;
	}
	printf("\n");

	return (0);
}
