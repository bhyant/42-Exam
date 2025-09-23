/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:52:53 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:55:52 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2) // verification des arg
	{
		while (av[1][i]) // on parcours av[1]
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z') // si c'est un maj on fait passer en min et write un _
			{
				av[1][i] += 32;
				write(1, "_", 1);
			}
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}