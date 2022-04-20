/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:54:41 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/10 08:56:10 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 4;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}*/

int	ft_iterative_factorial(int nb)
{
	int	c;
	int	r;

	c = 1;
	r = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (c <= nb)
	{
		r = r * c;
		c++;
	}
	return (r);
}
