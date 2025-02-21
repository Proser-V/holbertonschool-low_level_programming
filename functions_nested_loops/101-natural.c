#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int nat_numb, mult_three, mult_five, tot;

	nat_numb = 0;
	tot = 0;

	while (nat_numb < 1024)
	{
	mult_three = nat_numb % 3;
	mult_five = nat_numb % 5;

		if (mult_five == 0 || mult_three == 0)
		{
		tot += nat_numb;
		}
	nat_numb++;
	}
	printf("La somme est : %d\n", tot);
	return (0);
}
