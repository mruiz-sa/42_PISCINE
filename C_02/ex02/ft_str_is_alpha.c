/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:18:38 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/02 17:44:27 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;

	str = ".";
	printf("%d", ft_str_is_alpha(str));
}*/

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if ((str[c] < 'a' || str[c] > 'z') && (str[c] < 'A' || str[c] > 'Z'))
		{	
			return (0);
		}
		c++;
	}
	return (1);
}
