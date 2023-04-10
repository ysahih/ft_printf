/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_xxnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:04:48 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/16 19:08:35 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_xxnbr(unsigned int n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (n < 16)
	{
		count += ft_putchar(hex[n]);
	}
	else
	{
		count += ft_put_xxnbr(n / 16);
		count += ft_put_xxnbr(n % 16);
	}
	return (count);
}
