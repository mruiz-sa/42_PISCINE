/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:36:47 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/02/28 11:16:50 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	size = size -1;
	while (x < size)
	{
		y = tab[x];
		tab[x] = tab[size];
		tab[size] = y;
		size--;
		x++;
	}
}
