/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 09:38:45 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/27 09:41:04 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int ac, char **av)
{
	int	i;
	int save;

	i = 0;
	if (ac == 2) // verification des arguments
	{
		while (av[1][i]) // on va a la fin de la str
			i++;
		i--; // on retire le \0
		while (i >= 0) // tant que i n'est pas a 0
		{
			while (i > 0 && (av[1][i] == ' ' || av[1][i] == '\t')) // on saute les \t et espaces present avant un mot ou entre
				i--;
			while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t') // on recupere le mot 
				i--;
			save = i; // on mets le save a i pour le mot suivant
			i++;
			while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0') // on write le mot
				write(1, &av[1][i++], 1);
			i = save; // on mets i a save
			if (av[1][i] > 0) // on mets un espaces si c'est pas le dernier mots
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}