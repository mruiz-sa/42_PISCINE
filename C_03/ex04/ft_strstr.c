/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:32:30 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/30 16:32:38 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char	s1[] = "mikel";
	char	s2[] = "e";

	printf("%s", ft_strstr(s1, s2));
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	t;

	c = 0;
	t = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c])
	{
		t = 0;
		while (str[c + t] == to_find[t] && to_find[t])
		{
			if (to_find[t + 1] == '\0')
				return (&str[c]);
			t++;
		}
		c++;
	}
	return (0);
}
