/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:02:26 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 20:08:05 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str) // fonction qui mets en maj la premiere lettre d'un mot
{
	int	i = 0;

	while (str[i]) // on parcours str
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // si c'est une maj on mets en min
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == ' ' || str[i - 1] == '\t')) // si c'est un min en debut de mots on mets en maj
			str[i] -= 32;
		if (str[0] >= 'a' && str[0] <= 'z') // si str[0] est une lettre on la mets en maj
			str[i] -= 32;
		write(1, &str[i++], 1);
	}
}

int	main(int ac, char **av)
{
	int	i = 1;

	if (ac == 1)
		write (1, "\n", 1);
	else
	{
		while (i < ac) // tant que i est inferieur on effectue la fonction sur av[i] pour chaque argument
		{
			rstr_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}