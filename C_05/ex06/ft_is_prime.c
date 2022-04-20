/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:20:39 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/09 12:31:35 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;

	nb = -3;
	printf("%d", ft_is_prime(nb));
}*/

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
		return (0);
	while (c < nb)
	{
		if (!(nb % c))
		{
			return (0);
		}
		c++;
	}
	return (1);
}
