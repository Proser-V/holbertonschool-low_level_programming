#include <stdio.h>

/**
 * print_number - Helper function for Betty
 * @num: The number to print
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
}
