/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 23:55:32 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/22 00:22:07 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] <= 'y') || (av[1][i] >= 'a' && av[1][i] <= 'y')) // les lettre de "a" a "y" on fait +1
				av[1][i] += 1;
			else if (av[1][i] == 'z' || av[1][i] == 'Z') // pour le "z" on fait -25
				av[1][i] -= 25;
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
