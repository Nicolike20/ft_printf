/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:29:44 by nortolan          #+#    #+#             */
/*   Updated: 2021/09/28 16:46:42 by nortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	res;

	res = 0;
	while (str[res])
		res++;
	return (res);
}

int	ft_putchar_fd(char c, int fd)
{
	return (write (fd, &c, 1));
}

int	ft_putstr_fd(char *s, int fd)
{
	int	res;

	if (s == NULL)
		return (write(1, "(null)", 6));
	res = ft_strlen(s);
	while (*s)
		ft_putchar_fd(*s++, fd);
	return (res);
}

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *) s);
	}
	while (*s)
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	return (0);
}
