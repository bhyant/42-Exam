/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 00:30:44 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/22 00:32:24 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i]) // on va a la fin de la str
			i++;
		i--; // on retire le \0
		while (i >= 0) // tant que l'index n'est pas a 0 on ecris
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}

// L'exo a change c'est une fonction a faire maintenant mais le principe reste le meme, il y'a un main de test donne