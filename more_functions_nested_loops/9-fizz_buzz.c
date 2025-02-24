#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int nat_numb, mult_three, mult_five;

	nat_numb = 0;

	while (nat_numb < 100)
	{
	mult_three = nat_numb % 3;
	mult_five = nat_numb % 5;

		if (mult_three == 0 && mult_five != 0)
		{
		printf("Fizz ");
		}
		if (mult_five == 0 && mult_three != 0)
		{
		printf("Buzz ");
		}
		if (mult_three == 0 && mult_five == 0)
		{
		printf("BuzzFizz ");
		}
		else
		{
		printf("%d ", nat_numb);
		}
	nat_numb++;
	}
	return (0);
}
