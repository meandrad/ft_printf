/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:29:38 by macmac            #+#    #+#             */
/*   Updated: 2024/11/08 22:32:17 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int num)
{
	int		count;
	long	number;

	count = 0;
	number = num;
	if (num < 0)
	{
		count += ft_putchar('-');
		number *= -1;
	}
	if (number >= 10)
		count += ft_putnbr(number / 10);
	count += ft_putchar((number % 10) + '0');
	return (count);
}
