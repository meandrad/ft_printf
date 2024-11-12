/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:10:48 by macmac            #+#    #+#             */
/*   Updated: 2024/11/12 20:00:32 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuhexa(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_putuhexa(num / 16);
	if ((num % 16) < 10)
		count += ft_putchar((num % 16) + '0');
	else
		count += ft_putchar((num % 16) - 10 + 'A');
	return (count);
}
