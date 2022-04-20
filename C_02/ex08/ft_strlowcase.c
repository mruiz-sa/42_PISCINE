/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:23:10 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/02 17:43:11 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[] = "DDDD";

	ft_strlowcase(str);
	printf("%s", str);
	return (0);
}*/

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}
