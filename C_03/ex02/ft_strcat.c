/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:14:49 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/07 20:44:49 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

/*int	main(void)
{
	char	s1[] = "Ruiz";
	char	s2[] = "Mikel";

	printf("%s", ft_strcat(s1, s2));
	return (0);
}
*/
char	*ft_strcat(char *dest, char *src)
{
	int	c1;
	int	c2;

	c1 = 0;
	c2 = 0;
	while (dest[c1])
		c1++;
	while (src[c2])
		dest[c1++] = src[c2++];
	dest[c1] = '\0';
	return (dest);
}
