/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:02:24 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/16 19:57:32 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	per_check(va_list arg, char c, int len)
{
	if (c == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
	{
		len += ft_putstr("0x");
		len += ft_putaddress(va_arg(arg, unsigned long));
	}
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		len += ft_putun_nbr(va_arg(arg, int));
	else if (c == 'x')
		len += ft_putxnbr(va_arg(arg, int));
	else if (c == 'X')
		len += ft_put_xxnbr(va_arg(arg, int));
	else if (c == '%')
		len += ft_putchar('%');
	else
		len += ft_putchar(c);
	return (len);
}

int	ft_printf(const char *f, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, f);
	while (f[i])
	{
		if (f[i] == '%')
			len = per_check(arg, f[++i], len);
		else
			len += ft_putchar(f[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
