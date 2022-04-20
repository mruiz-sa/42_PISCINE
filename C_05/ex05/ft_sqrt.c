/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:28:09 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/09 12:31:21 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 1835124443;
	printf("%d", ft_sqrt(nb));
}*/

int	ft_sqrt(int nb)
{
	int	c;

	c = 0;
	while (c * c <= nb)
	{
		if (nb > 2147483641)
			return (0);
		if (nb == c * c)
		{
			return (c);
		}
		c++;
	}
	return (0);
}
