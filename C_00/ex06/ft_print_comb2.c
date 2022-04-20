/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:58:59 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/02/23 13:23:09 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ <= 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			write(1, " ", 1);
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (a != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
