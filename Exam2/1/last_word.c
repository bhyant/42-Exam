/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 11:24:20 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 11:30:47 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac == 2) // verifiaction du nombres d'argument
	{
		while (av[1][i]) // on place l'index a la fin de la str
			i++;
		i--; // on retire le \0
		while (av[1][i] == ' ' || av[1][i] == '\t') // on saute les \t et espaces si il y'en as avant le mot
			i--;
		while (av[1][i] != ' ' && av[1][i] != '\t' && i >= 0) // on se place au debut du mot
			i--;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i]) // on ecris tant que c'est pas un \t ou un espaces
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
}