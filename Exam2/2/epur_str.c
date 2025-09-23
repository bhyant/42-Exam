/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 21:50:23 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 21:52:46 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0; // flag pour savoir si il dois write un espace ou non
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t') // on saute les \t et espaces
			i++;
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t') // si c'est un \t ou un espaces on mets le flag a 1
				flag = 1;
			if (av[1][i] != ' ' && av[1][i] != '\t') // si le av[1][i] n'est pas un \t et un espaces on write av[1][i]
			{
				if (flag) // avant de write av[1][i] si il y'a un flag on write un espace et mets le flag a 0
				{
					write(1, " ", 1);
					flag = 0;
				}
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}