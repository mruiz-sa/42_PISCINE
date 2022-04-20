/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:44:23 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/07 18:38:39 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, unsigned int nb);

/*int	main(void)
{
	char	s1[] = "Mikel";
	char	s2[] = "Ruuiz";
	int		size = 3;

	printf("%s", ft_strncat(s2, s1, size));
	return (0);
}*/

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				size_dest;
	unsigned int	c;

	size_dest = ft_strlen(dest);
	c = 0;
	while (c < nb && src[c])
	{
		dest[size_dest] = src[c];
		size_dest++;
		c++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
