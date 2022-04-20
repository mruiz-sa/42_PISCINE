/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:37:44 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/08 12:11:30 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putstr(char *str);

int	main(void)
{
	char	str[5];

	str[0] = 'h';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	ft_putstr(str);
	return (0);
}*/

void	ft_putstr(char *str)
{
	int	a;

	a = -1;
	while (str[++a] != '\0')
	{
		write(1, &str[a], 1);
	}
}
