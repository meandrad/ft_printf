/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macmac <macmac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:29:38 by macmac            #+#    #+#             */
/*   Updated: 2024/11/07 23:50:31 by macmac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/ft_printf.h>

int	ft_putnbr(int num)
{
	int	count;
	long	num;

	count = 0;
	if (num < 0)
	{
		count += ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		count += ft_putnbr(num / 10);
	count += ft_putchar((num % 10) + '0');
	return (count);
}
