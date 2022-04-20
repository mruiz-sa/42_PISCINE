/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 19:13:30 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/02 17:45:41 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;

	str = "A";
	printf("%d", ft_str_is_uppercase(str));
}*/

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 'A' || str[c] > 'Z')
		{	
			return (0);
		}
		c++;
	}
	return (1);
}
