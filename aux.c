/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:01:29 by garibeir          #+#    #+#             */
/*   Updated: 2022/11/18 14:02:30 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int	ft_countlen(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
		c++;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	long int	numb;

	numb = n;
	len = ft_countlen(numb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (numb < 0)
	{
		str[0] = '-';
		numb *= -1;
	}
	if (numb == 0)
		str[0] = '0';
	str[len] = '\0';
	len--;
	while (numb)
	{
		str[len] = numb % 10 + '0';
		len--;
		numb /= 10;
	}
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}
