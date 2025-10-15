/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:31:03 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/10/15 14:20:46 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	inter(char *str, char c, int pos) // meme fonction que pour union
{
	int	i = 0;

	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 3)
	{
		while (av[1][i]) // on parcours av[1]
		{
			j = 0; // on remet j a 0 a chaque fois qu'on passe au char suivant
			while (av[2][j]) // on parcours av[2]
			{
				if (av[1][i] == av[2][j]) // si le char av[1][i] est present dans av[2]
				{
					if (!inter(av[1], av[1][i], i)) // on verifie qu'il n'est pas deja present avant dans av[1]
					{
						write(1, &av[1][i], 1); // on ecris puis on break
						break ;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
