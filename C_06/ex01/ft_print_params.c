/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-sa <mruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:57:34 by mruiz-sa          #+#    #+#             */
/*   Updated: 2022/03/10 20:20:00 by mruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	c;
	int	i;

	c = 1;
	(void)argc;
	while (argv[c])
	{
		i = 0;
		while (argv[c][i])
			i++;
		write(1, argv[c], i);
		write(1, "\n", 1);
		c++;
	}
	return (0);
}
