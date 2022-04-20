/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:18:15 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/02 17:45:52 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;

	str = "DEL";
	printf("%d", ft_str_is_printable(str));
}*/

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 32 || str[c] == 127)
		{	
			return (0);
		}
		c++;
	}
	return (1);
}
