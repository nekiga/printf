#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "./libft/libft.h"


int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr_base(int num, int base);
int ft_putpointer(char *s);
int ft_uputnbr(char *s);
int ft_puthex(int num, int base);
int ft_PUTHEX(char *s);
int ft_putpercent(char *s);


#endif