#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int nat_numb, mult_three, mult_five;

	nat_numb = 1;

	for (nat_numb = 1; nat_numb <= 100; nat_numb++)
	{
	mult_three = nat_numb % 3;
	mult_five = nat_numb % 5;

		if (mult_three == 0 && mult_five == 0)
		{
		printf("FizzBuzz ");
		}
		else if (nat_numb == 100)
		{
		printf("Buzz\n");
		}
		else if (mult_five == 0 && mult_three != 0)
		{
		printf("Buzz ");
		}
		else if (mult_three == 0 && mult_five != 0)
		{
		printf("Fizz ");
		}
		else
		{
		printf("%d ", nat_numb);
		}
	}

	return (0);
}
