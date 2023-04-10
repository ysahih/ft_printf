/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:05:09 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/16 19:05:10 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(unsigned long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n < 16)
	{
		count += ft_putchar(hex[n]);
	}
	else
	{
		count += ft_putaddress(n / 16);
		count += ft_putaddress(n % 16);
	}
	return (count);
}
