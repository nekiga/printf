/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:33:28 by garibeir          #+#    #+#             */
/*   Updated: 2022/11/18 15:15:59 by garibeir         ###   ########.fr       */
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
	while (s[i])
		ft_putchar(s[i++]);
	return (i);
}


char	ft_conv(int quotient, int remainder, int base)
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

int	ft_puthex(int num, int base)
{
	int		i;
	int		j;
	long	remainder;
	long	quotient;
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

int	ft_putnbr(long long num)
{
	char	*buffer;
	int		len;

	if (num < 0)
		ft_putchar('-');
	len = ft_strlen(ft_itoa(num));
	buffer = (char *)malloc(sizeof(char) * len + 1);
	ft_strlcpy(buffer, ft_itoa(num), len + 1);
	ft_putstr(buffer);
	return (len);
}
int	ft_putpointer(long long pointer)
{
	return (1);
}

int	main(void)
{
	int	num = 135650;

	printf("Prinf prints: %i\n", num);
	printf("My function returns: \n");
	ft_putnbr(num);
	printf("\n");
}
