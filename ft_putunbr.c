/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:57:00 by macmac            #+#    #+#             */
/*   Updated: 2024/11/12 20:00:36 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_putunbr(num / 10);
	count += ft_putchar((num % 10) + '0');
	return (count);
}
