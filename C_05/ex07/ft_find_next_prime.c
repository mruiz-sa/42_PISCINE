/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 09:43:40 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/10 08:57:14 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

/*int	main(void)
{
	int	nb;

	nb = 2147483630;
	printf("%d", ft_find_next_prime(nb));
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

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483629)
		return (2147483647);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
