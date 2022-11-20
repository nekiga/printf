/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:33:15 by garibeir          #+#    #+#             */
/*   Updated: 2022/11/18 17:23:49 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(long long num, int flag);
int	ft_puthex(unsigned long long num, int base);
int ft_putpointer(void *p);
int	ft_putpercent(char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_itoa(long long n, int flag);
size_t	ft_strlen(const char *str);
int	ft_printf(const char *s, ...);

#endif