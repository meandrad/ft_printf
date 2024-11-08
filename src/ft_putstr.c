/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macmac <macmac@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:24:30 by macmac            #+#    #+#             */
/*   Updated: 2024/11/08 00:14:18 by macmac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/ft_printf.h>

int	ft_putstr(const char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		ft_putchar(string[i]);
		i++;
	}
	return (i);
}
