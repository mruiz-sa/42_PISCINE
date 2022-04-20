/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:55:15 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/07 18:31:19 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "mikel";
	char	s2[] = "mikel";

	printf ("%d", ft_strcmp(s1, s2));
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	c;
	int	r;

	c = 0;
	r = 0;
	while ((s1[c] != '\0') && (s2[c] != '\0') && (s1[c] == s2[c]))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
