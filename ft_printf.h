/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:25:02 by macmac            #+#    #+#             */
/*   Updated: 2024/11/12 20:00:07 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_putchar(int ch);
int	ft_putstr(const char *string);
int	ft_putnbr(int num);
int	ft_putunbr(unsigned int num);
int	ft_putptr(unsigned long ptr);
int	ft_putlhexa(unsigned int num);
int	ft_putuhexa(unsigned int num);
int	ft_printf(const char *string, ...);

#endif