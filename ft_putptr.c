/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:29:18 by macmac            #+#    #+#             */
/*   Updated: 2024/11/12 20:00:24 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
