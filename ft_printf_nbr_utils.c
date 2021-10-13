/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:44:30 by nortolan          #+#    #+#             */
/*   Updated: 2021/09/28 16:49:25 by nortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptrnbr(uintptr_t nbr, char *base, int check)
{
	unsigned long	nb;
	unsigned long	len;
	static int		res;

	len = ft_strlen(base);
	nb = nbr;
	if (check == 0)
	{
		ft_putstr_fd("0x", 1);
		res = 2;
	}
	if (nb < len)
	{
		res += ft_putchar_fd(base[nb], 1);
	}
	else
	{
		ft_put_ptrnbr(nb / 16, base, 1);
		res += ft_putchar_fd(base[nb % 16], 1);
	}
	return (res);
}

int	ft_putnbr_base(int nbr, char *base, int check)
{
	unsigned int	nb;
	unsigned int	len;
	static int		res;

	len = ft_strlen(base);
	nb = nbr;
	if (check == 0)
		res = 0;
	if (nb < len)
		res += ft_putchar_fd(base[nb], 1);
	else
	{
		ft_putnbr_base(nb / len, base, 1);
		res += ft_putchar_fd(base[nb % len], 1);
	}
	return (res);
}

int	ft_putnbr_fd(int n, int fd, int check)
{
	static int	res;

	if (check == 0)
		res = 0;
	if (n == -2147483648)
	{
		res += ft_putstr_fd("-2", fd);
		n = 147483648;
	}
	if (n < 0)
	{
		res += ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd, 1);
	}
	else
	{
		if (n <= 9)
			res += ft_putchar_fd(n + 48, fd);
		else
		{
			ft_putnbr_fd(n / 10, fd, 1);
			res += ft_putchar_fd(n % 10 + 48, fd);
		}
	}
	return (res);
}

int	ft_put_unsnbr_fd(unsigned int n, int fd, int check)
{
	static int	res;

	if (check == 0)
		res = 0;
	if (n <= 9)
	{
		res += ft_putchar_fd(n + 48, fd);
	}
	else
	{
		ft_put_unsnbr_fd(n / 10, fd, 1);
		res += ft_putchar_fd(n % 10 + 48, fd);
	}
	return (res);
}
