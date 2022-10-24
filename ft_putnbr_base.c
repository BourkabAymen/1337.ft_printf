/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:44:15 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/23 23:36:13 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nb, char cs, int *index)
{
	unsigned int	n;
	char			*hex_base;

	n = nb;
	if (cs == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	if (n < 16)
		ft_putchar(hex_base[n % 16], index);
	else
	{
		ft_putnbr_base(n / 16, cs, index);
		ft_putnbr_base(n % 16, cs, index);
	}
}
