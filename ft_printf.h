/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nortolan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:10:33 by nortolan          #+#    #+#             */
/*   Updated: 2021/09/28 16:48:53 by nortolan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

# define L_HEX "0123456789abcdef"
# define U_HEX "0123456789ABCDEF"

int		ft_put_ptrnbr(uintptr_t nbr, char *base, int check);
int		ft_putnbr_base(int nbr, char *base, int check);
int		get_flag(char f, va_list args, int res);
int		ft_printf(const char *format, ...);
size_t	ft_strlen(const char *str);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
int		ft_putnbr_fd(int n, int fd, int check);
int		ft_put_unsnbr_fd(unsigned int n, int fd, int check);

#endif
