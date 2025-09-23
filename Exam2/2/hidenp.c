/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 13:23:54 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 13:28:43 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 3) // verification du nombres d'arguments
	{
		while (av[2][i]) // on parcours av[2]
		{
			if (av[1][j] == av[2][i]) // si un char correspond a av[1][j] on incremente j
				j++;
			i++;
		}
		if (av[1][j] == '\0') // si av[1][j] est le \0 on write 1
			write(1, "1", 1);
		else
			write(1, "0", 1); // on write 0 dans le cas ou av[1] n'est pas cache dans av[2]
	}
	write(1, "\n", 1);
}