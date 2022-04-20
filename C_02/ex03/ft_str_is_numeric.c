/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:50:46 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/02 17:46:19 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;

	str = "555";
	printf("%d", ft_str_is_numeric(str));
}*/

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < '0' || str[c] > '9')
		{	
			return (0);
		}
		c++;
	}
	return (1);
}
