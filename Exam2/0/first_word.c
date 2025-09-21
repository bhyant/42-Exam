/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbhuiyan <tbhuiyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 00:23:09 by tbhuiyan          #+#    #+#             */
/*   Updated: 2025/09/22 00:33:09 by tbhuiyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t') // on saute les ' ' et \t si il y'en a en debut de str
			i++;
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i]) // on ecris le 1er mot
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
}