/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:06:34 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/28 16:10:07 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[] = "Mikel ";
	char	src[] = "rrrr";
	unsigned int	length;

	printf("%s\n", src);
	printf("%s\n", dest);
	length = ft_strlcpy(dest, src, 3);
	printf("%d\n", length);
	write(1, dest, 9);
	return (0);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	i;

	i = 0;
	cont = 0;
	while (src[cont] != '\0')
		cont++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (cont);
}
