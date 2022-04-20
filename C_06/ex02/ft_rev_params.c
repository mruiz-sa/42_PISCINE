/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:13:12 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/09 18:21:05 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	c;

	argc = argc - 1;
	while (argc > 0)
	{
		c = 0;
		while (argv[argc][c])
			c++;
		write(1, argv[argc], c);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
