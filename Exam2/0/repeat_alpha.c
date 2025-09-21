/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 00:28:21 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/22 00:30:24 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	repeat;

	i = 0;
	repeat = 1; // nombre de repetition de la lettre
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z') // -96 pour les minuscules
				repeat = av[1][i] -96;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z') // 64 pour les majuscules
				repeat = av[1][i] - 64;
			else
				repeat = 1; // on mets la repetition a 1 si c'est pas une lettre
			while (repeat)
			{
				write(1, &av[1][i], 1); // tant que repeat existe on write av[1][i]
				repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}