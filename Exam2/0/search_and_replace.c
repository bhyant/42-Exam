/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:40:33 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/21 13:44:25 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0') // verification des arguments et de la taille de av[2] et av[3]
	{
		while (av[1][i]) // on parcours av[1]
		{
			if (av[1][i] == av[2][0]) // si le charactere est celui que l'on cherche on le remplace
				av[1][i] = av[3][0];
			write(1, &av[1][i++], 1); // on ecris le charactere
		}
	}
	write(1, "\n", 1); // \n de fin
}
