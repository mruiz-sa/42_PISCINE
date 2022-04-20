/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:05:50 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/09 12:31:04 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = -1;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}*/

int	ft_recursive_power(int nb, int power)
{
	int	c;

	c = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
