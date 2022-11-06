/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourkab <abourkab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:43:28 by abourkab          #+#    #+#             */
/*   Updated: 2022/10/24 15:35:06 by abourkab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c, int *index);
void	ft_putstr(const char *s, int *index);
void	ft_putnbr(int nb, int *index);
void	ft_putnbr_u(unsigned int nb, int *index);
void	ft_putnbr_base(unsigned int nb, char cs, int *index);
void	ft_print_memory(const void *ptr, int *index);
int		ft_printf(const char *format, ...);

#endif
