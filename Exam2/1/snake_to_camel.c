/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:46:26 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:51:28 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2) // verification des arguments
	{
		while (av[1][i]) // on parcours av[1]
		{
			if (av[1][i] == '_') // si il y'a un _ on passe au char suivant et le mets en majuscules
			{
				i++;
				av[1][i] -= 32;
			}
			write(1, &av[1][i++], 1);
		}
	}
	write (1, "\n", 1);
}