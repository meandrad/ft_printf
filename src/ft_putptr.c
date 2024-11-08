/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macmac <macmac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:29:18 by macmac            #+#    #+#             */
/*   Updated: 2024/11/07 23:50:35 by macmac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/ft_printf.h>

int	ft_putptr(unsigned long ptr)
{
	int	count;

	count = 0;
	if (ptr >= 16)
		count += ft_putptr(ptr / 16);
	if ((ptr % 16) < 10)
		count += ft_putchar((ptr % 16) + '0');
	else
		count += ft_putchar((ptr % 16) - 10 + 'a');
	return (count);
}
