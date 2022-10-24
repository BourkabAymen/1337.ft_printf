/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:44:37 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/23 22:47:25 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *s, int *index)
{
	int	i;

	if (!s)
		ft_putstr("(null)", index);
	else
	{
		i = 0;
		while (s[i] != '\0')
			ft_putchar(s[i++], index);
	}
}
