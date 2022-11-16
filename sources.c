#include "ft_printf.h"

int ft_putchar(char c)
{
    write (1, &c, 1);
    return (1);
}


int ft_putstr(char *s)
{
    int i;
    
    i = 0;
    while (s[i])
        ft_putchar(s[i]);
    return (i);
}

int ft_puthex(int num, int base)
{
    int i;
    int j;
    long    remainder;
    long    quotient;
    char hexnum[100];

    i = 0;
    j = 0;
    quotient = num;
    while (quotient != 0)
     {
        remainder = quotient % 16;
        if (remainder < 10)
            hexnum[j++] = 48 + remainder; 
         else
         {
            if (base == 'X')
                hexnum[j++] = 55 + remainder;
            if (base == 'x')
                 hexnum[j++] = 87 + remainder;
         }
         quotient /= 16;
      }

    hexnum[j] = '\0';
    while (j + 1)
        ft_putchar(hexnum[j--]);
}

int ft_putnbr(char *s);
int ft_putpointer(char *s);
int ft_uputnbr(char *s);
int ft_putpercent(char *s);
