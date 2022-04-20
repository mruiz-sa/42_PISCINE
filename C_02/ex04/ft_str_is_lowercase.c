/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:56:19 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/02 17:45:27 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;

	str = "";
	printf("%d", ft_str_is_lowercase(str));
}*/

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] < 'a' || str[c] > 'z')
		{	
			return (0);
		}
		c++;
	}
	return (1);
}
