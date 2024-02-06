/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:40:23 by msbai             #+#    #+#             */
/*   Updated: 2023/12/05 22:41:24 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	chack(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	chacktype(char c, va_list agrs)
{
	int	len;

	len = 0;
	if (!agrs)
		return (0);
	if (c == 'c')
		len += ft_putchar(va_arg(agrs, int));
	else if (c == 's')
		len += ft_putstr(va_arg(agrs, char *));
	else if (c == 'p')
		len += ft_hexp(va_arg(agrs, long unsigned int), 1);
	else if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(agrs, int));
	else if (c == 'u')
		len += ft_unputnbr(va_arg(agrs, unsigned int));
	else if (c == 'x')
		len += ft_hex(va_arg(agrs, int), 1, 1);
	else if (c == 'X')
		len += ft_hex(va_arg(agrs, int), 2, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	agrs;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!format)
		return (-1);
	va_start(agrs, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
			len += ft_putchar(format[i++]);
		else if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		else if (format[i] == '%' && chack(format[i + 1], "cspdiuxX"))
			len += chacktype(format[i++ + 1], agrs);
		else if (format[i] == '%' && !(chack(format[i + 1], "cspdiuxX")))
			len += ft_putchar(format[i]);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(agrs);
	return (len);
}
