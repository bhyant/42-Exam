/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 21:46:49 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/23 21:50:12 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t') // on saute les \t et les espaces en debut de av
			i++;
		while (av[1][i])
		{
			if (av[1][i] != ' ' && av[1][i] != '\t') // si ce n'est pas un \t ou un espaces on le write
				write(1, &av[1][i], 1);
			if (av[1][i] == 32 && av[1][i + 1] != 32 // si c'est un espace et que le char prochain n'est pas un \t, un espaces et un \0 
				&& av[1][i + 1] != '\t' && av[1][i + 1] != '\0') // on write 3 espaces
				write(1, "   ", 3);
			i++;
		}
	}
	write(1, "\n", 1);
}