#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return: no return
 */
void print_alphabet_x10(void)
{
	char ch;
	int compteur;

	compteur = 0;

	while (compteur < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)

		{
			_putchar(ch)
		}
			_putchar('\n');
	compteur++;
	}
}
