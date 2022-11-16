#include "ft_printf.h"

unsigned int _vprint(va_list args, const char var)
{
    int len;
    int i;

    len = 0;
    i = 0;
    if (var== 'c')
       len += ft_putchar(va_arg(args, char));
    if(var== 's')
      len += ft_putstr(va_arg(args, char *));
    if(var== 'd' || var == 'i')
       len += ft_putnbr(va_arg(args, int));
    if(var== 'p')
      len += ft_putpointer(va_arg(args, unsigned long long));
    if(var== 'u')
      len += ft_uputnbr(va_arg(args, unsigned int));
    if(var == 'x')
       len += ft_puthex(va_arg(args,unsigned int));
    if(var== 'X')
      len +=  ft_PUTHEX(va_arg(args, unsigned int));
    if(var == '%')
        len += ft_putpercent(va_arg(args, unsigned int));
    return (len);
}

int ft_printf(const char *s, ...)
{
    unsigned int i;
    unsigned    len;
    va_list     args;

    i= 0;
    va_start(args, s);
    if (!s)
        return (-1);
    while (s[i])
    {
        if (s[i] != '%')
            ft_putchar(s[i]);
        else 
        {
           len = i + _vprint(args, s[i + 1]);
            i++;
        }
        i++;
    }
    return (len);
}
