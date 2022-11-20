/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:33:28 by garibeir          #+#    #+#             */
/*   Updated: 2022/11/19 15:38:52 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}


char	ft_conv(unsigned long long quotient, unsigned long long remainder, int base)
{
	remainder = quotient % 16;
	if (remainder < 10)
		return (48 + remainder);
	else
	{
		if (base == 'X')
			return (55 + remainder);
		if (base == 'x')
			return (87 + remainder);
	}
	quotient /= 16;
	return ('\0');
}

int	ft_puthex(unsigned long long num, int base)
{
	int		i;
	int		j;
	unsigned long long	remainder;
	unsigned long long	quotient;
	char	hexnum[100];

	i = 0;
	j = 0;
	quotient = num;
	remainder = 0;
	while (quotient != 0)
	{
		hexnum[j++] = ft_conv(quotient, remainder, base);
		quotient /= 16;
	}
	hexnum[j] = '\0';
	i = j;
	while (j + 1)
		ft_putchar(hexnum[j--]);
	return (i);
}


int	ft_putnbr(long long num, int flag)
{
	char	*buffer;
	int		len;
	char	*str;

	str =  ft_itoa(num, flag);
	len = ft_strlen(str);
	buffer = (char *)malloc(sizeof(char) * len + 1);
	ft_strlcpy(buffer, str, len + 1);
	ft_putstr(buffer);
	free(buffer);
	free(str);
	return (len);
}
int ft_putpointer(void *p)
{
	unsigned long long *pp;

	pp = (unsigned long long *)&p;
	
	if (!pp)
			return (ft_putstr("(nil)"));
	ft_putstr("0x");
	return (ft_puthex(*pp,'x') + 2);
}