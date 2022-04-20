/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:04:43 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/28 16:06:09 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[] = "Mikel ";
	char	src[] = "Ruiz";

	printf("%s", dest);
	ft_strncpy(dest, src, 3);
	printf("%s", dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (src[cont] && cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
