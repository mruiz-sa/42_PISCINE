/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 21:15:28 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/08 12:13:11 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_atoi(char *str);

int	main(void)
{
	char	str[] = "   --+---+123454545ah475";

	printf("%d", ft_atoi(str));
}*/

int	ft_atoi(char *str)
{
	int	sign;
	int	c;
	int	numb;

	sign = 1;
	c = 0;
	numb = 0;
	while (str[c] == ' ' || str[c] == '\f' || str[c] == '\n'
		|| str[c] == '\r' || str[c] == '\t' || str[c] == '\v')
	{
		c++;
	}
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		numb = (numb * 10) + (str[c] - '0');
		c++;
	}
	numb *= sign;
	return (numb);
}
