/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:54:43 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/02/23 11:48:15 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	numeros [3];

	numeros [0] = '0';
	while (numeros [0] <= '9')
	{
		numeros [1] = '0';
		while (numeros [1] <= '9')
		{
			numeros [2] = '0';
			while (numeros [2] <= '9')
			{
				if (numeros [2] > numeros [1] && numeros [1] > numeros [0])
				{
					write(1, &numeros, 3);
					if (numeros [0] != '7')
					{
						write(1, ", ", 2);
					}
				}
				numeros [2]++;
			}
			numeros [1]++;
		}
	numeros [0]++;
	}
}
