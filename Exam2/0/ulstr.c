/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 13:36:10 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/22 00:22:10 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2) // verification des arguments
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z') // si c'est une min on mets en maj
			av[1][i] -= 32;
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z') // on mets en min si c'est une maj
			av[1][i] += 32;
		write(1, &av[1][i++], 1); // on write le charactere apres les changements
	}
	write(1, "\n", 1); // \n si il n'y a pas 2 arguments ou a la fin de la str
}
