/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:43:59 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/24 15:36:17 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *index)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648", index);
	else if (nb < 0)
	{
		ft_putchar('-', index);
		ft_putnbr(-nb, index);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, index);
		ft_putnbr(nb % 10, index);
	}
	else
		ft_putchar(nb + 48, index);
}
