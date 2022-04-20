/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:40:27 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/08 12:46:08 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/

void	ft_putnbr(int nb)
{
	char	number;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb / 10)
		{
			ft_putnbr(nb / 10);
		}
		number = nb % 10 + '0';
		write(1, &number, 1);
	}
}
