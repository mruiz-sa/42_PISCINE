/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:29:03 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/09 12:30:55 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 10;
	power = -1;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/

int	ft_iterative_power(int nb, int power)
{
	int	c;

	c = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	while (power > 0)
	{
		c *= nb;
		power--;
	}
	return (c);
}
