/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:05:11 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/10 08:56:18 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;

	nb = 13;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
