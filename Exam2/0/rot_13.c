/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 00:02:47 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/22 00:22:05 by tbhuiyan         ###   ########.fr       */
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
			if ((av[1][i] >= 'a' && av[1][i] <= 'm') || (av[1][i] >= 'A' && av[1][i] <= 'M')) // +13 pour les 13 premieres lettre de l'alphabets
				av[1][i] += 13;
			else if ((av[1][i] >= 'n' && av[1][i] <= 'z') || (av[1][i] >= 'N' && av[1][i] <= 'Z')) // -13 pour les 13 dernieres lettre de l'alphabets
				av[1][i] -= 13;
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}
