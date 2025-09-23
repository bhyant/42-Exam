/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:56:10 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 12:01:59 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	
	if (ac == 2) // verification des arg
	{
		while (av[1][i]) // on parcours la str
		{
			if (av[1][i] >= 'a' & av[1][i] <= 'z') // on effectue le changement via la table ASCII
				av[1][i] = 'z' - av[1][i] + 'a';
			else if (av[1][i] >= 'A' & av[1][i] <= 'Z')
				av[1][i] = 'Z' - av[1][i] + 'A';
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
}