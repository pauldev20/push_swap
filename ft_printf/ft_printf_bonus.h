/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgeeser <pgeeser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 16:16:10 by pgeeser           #+#    #+#             */
/*   Updated: 2022/05/20 16:28:54 by pgeeser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct s_args {
	int	minus;
	int	zero;
	int	prec;
	int	width;
	int	space;
	int	plus;
	int	tag;
}	t_args;

int	ft_printf(const char *str, ...);
int	putstr(char *s, int precision);
int	putchr(char c);
int	puthex(unsigned long long a, char begin, int precision, int zerox);
int	putnbr(long long nb, int precision, int sign, int space);

int	printnbr(long long nb, t_args args);
int	printchar(char c, t_args args);
int	printstr(char *s, t_args args);
int	printptr(void *ptr, t_args args);
int	printhex(unsigned long long a, char begin, t_args args);

#endif