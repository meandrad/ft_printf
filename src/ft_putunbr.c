/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macmac <macmac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:57:00 by macmac            #+#    #+#             */
/*   Updated: 2024/11/07 23:50:44 by macmac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/ft_printf.h>

int	ft_putunbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_putunbr(num);
	count += ft_putchar((num % 10) + '0');
	return (count);
}
