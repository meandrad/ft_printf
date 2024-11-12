/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:21:26 by macmac            #+#    #+#             */
/*   Updated: 2024/11/12 20:00:11 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_pointer(unsigned long ptr)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putptr(ptr);
	return (count);
}

static int	ft_format(va_list args, char ch)
{
	int	count;

	count = 0;
	if (ch == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (ch == 's')
		count += ft_putstr(va_arg(args, const char *));
	else if (ch == 'p')
		count += check_pointer(va_arg(args, unsigned long));
	else if (ch == 'd' || ch == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (ch == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	else if (ch == 'x')
		count += ft_putlhexa(va_arg(args, unsigned int));
	else if (ch == 'X')
		count += ft_putuhexa(va_arg(args, unsigned int));
	else if (ch == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *string, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start (args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			count += ft_format(args, string[i + 1]);
			i++;
		}
		else
			count += ft_putchar(string[i]);
		i++;
	}
	va_end(args);
	return (count);
}
