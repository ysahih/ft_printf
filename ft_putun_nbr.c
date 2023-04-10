/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:06:18 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/16 19:06:19 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putun_nbr(unsigned int n)
{
	long long	nb;
	int			count;

	count = 0;
	nb = n;
	if (nb < 10)
	{
		count += ft_putchar(nb + 48);
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	return (count);
}
