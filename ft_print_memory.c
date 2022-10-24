/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:42:56 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/23 21:45:23 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Similar to ft_putnbr_base, the only differance is in the arguments type
static void	ft_puthex(unsigned long int nb, int *index)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(base[nb % 16], index);
	else
	{
		ft_puthex(nb / 16, index);
		ft_puthex(nb % 16, index);
	}
}

// Prints memory address to the std output in the hexadecimal base (0x)
void	ft_print_memory(const void *ptr, int *index)
{
	unsigned long int	address;

	address = (unsigned long int)ptr;
	ft_putstr("0x", index);
	ft_puthex(address, index);
}
