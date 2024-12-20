/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:24:30 by macmac            #+#    #+#             */
/*   Updated: 2024/11/09 15:06:39 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(const char *string)
{
	int	i;

	i = 0;
	if (!string)
		return (ft_putstr("(null)"));
	while (string[i] != '\0')
	{
		ft_putchar(string[i]);
		i++;
	}	
	return (i);
}
