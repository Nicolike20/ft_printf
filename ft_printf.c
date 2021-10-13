/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:09:37 by nortolan          #+#    #+#             */
/*   Updated: 2021/09/28 16:49:42 by nortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_flag(char f, va_list args, int res)
{
	if (f == '%')
		res += ft_putchar_fd(f, 1);
	else if (f == 'c')
		res += ft_putchar_fd(va_arg(args, int), 1);
	else if (f == 's')
		res += ft_putstr_fd(va_arg(args, char *), 1);
	else if (f == 'p')
		res += ft_put_ptrnbr((uintptr_t) va_arg(args, void *), L_HEX, 0);
	else if (f == 'd' || f == 'i')
		res += ft_putnbr_fd(va_arg(args, int), 1, 0);
	else if (f == 'u')
		res += ft_put_unsnbr_fd(va_arg(args, unsigned int), 1, 0);
	else if (f == 'x')
		res += ft_putnbr_base(va_arg(args, int), L_HEX, 0);
	else if (f == 'X')
		res += ft_putnbr_base(va_arg(args, int), U_HEX, 0);
	return (res);
}

int	ft_printf(const char *format, ...)
{
	int		res;
	int		i;
	va_list	args;

	va_start(args, format);
	res = 0;
	i = -1;
	while (format[++i])
	{
		if (format[i] == '%' && format[i + 1])
			res = get_flag(format[++i], args, res);
		else if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			res++;
		}
	}
	va_end(args);
	return (res);
}
