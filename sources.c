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

int ft_putnbr_base(int num)
{
 
}

int ft_putnbr(char *s);
int ft_putpointer(char *s);
int ft_uputnbr(char *s);
int ft_puthex(char *s);
int ft_PUTHEX(char *s);
int ft_putpercent(char *s);
