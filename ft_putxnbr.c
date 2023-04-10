/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putxnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:06:25 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/16 19:06:26 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putxnbr(unsigned int n)
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
		count += ft_putxnbr(n / 16);
		count += ft_putxnbr(n % 16);
	}
	return (count);
}
