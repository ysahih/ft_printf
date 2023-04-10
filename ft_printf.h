/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:03:26 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/16 19:04:37 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_put_xxnbr(unsigned int n);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putun_nbr(unsigned int n);
int	ft_putxnbr(unsigned int n);
int	ft_printf(const char *f, ...);
int	ft_putaddress(unsigned long n);

#endif