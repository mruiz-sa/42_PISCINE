/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:05:20 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/07 18:33:47 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "Mikell";
	char	s2[] = "Mikel";

	printf("%d", ft_strncmp(s1, s2, 6));
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int				t;

	c = 0;
	t = 0;
	while ((s1[c] || s2[c]) && t == 0 && c < n)
	{
		t = s1[c] - s2[c];
		c++;
	}
	return (t);
}
