/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:27:28 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/05 16:42:07 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "Kzobcuzb`Tg6l6tkk^)@2l8p+3i|Uu28_9Lxd`$";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
		if (str[i] == ' ')
			if (!(str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
				if (!(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
					str[i + 1] = str[i + 1] - 32;
		if (str[i] >= 32 && str[i] <= 126)
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				if (!(str[i] >= 'a' && str[i] <= 'z'))
					if (!(str[i] >= '0' && str[i] <= '9'))
						if (str[i +1] >= 'a' && str[i + 1] <= 'z')
							str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
