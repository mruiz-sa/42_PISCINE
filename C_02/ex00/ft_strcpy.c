/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:39:10 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/28 15:54:30 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

/*char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[] = "First ";
	char	src[] = "Second";

	printf("%s", dest);
	ft_strcpy(dest, src);
	printf("%s", dest);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont])
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (dest);
}
