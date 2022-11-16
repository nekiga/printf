
int
 unsigned int i;
    int         len;
    va_list     args;
    unsigned int arg;
    char *string_arg;

    i= 0;
    va_start(args, s);
    if (!s)
        return (-1);
    while (s[i] != '%')
    {
        ft_putchar(s[i]);
        i++;
    }
    i++;
    if (s[i]== 'c')
       len = ft_putchar(va_args(args, ));
    if(s[i]== 's')
      len = ft_putstr(va_args(args, string_arg));
    if(s[i]== 'd' || s[i]== 'i')
       len = ft_putnbr(va_args(args, arg));
    if(s[i]== 'p')
      len = ft_putpointer(va_args(args, arg));
    if(s[i]== 'u')
      len = ft_uputnbr(va_args(args, arg));
    if(s[i]== 'x')
       len = ft_puthex(va_args(args, arg));
    if(s[i]== 'X')
      len =  ft_PUTHEX(va_args(args, arg));
    if(s[i]== '%')
        len = ft_putchar('%');
    return ((int)ft_strlen(s) + len);s
    